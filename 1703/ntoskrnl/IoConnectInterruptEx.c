/*
 * XREFs of IoConnectInterruptEx @ 0x140588090
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopConnectLineBasedInterrupt @ 0x140587E04 (IopConnectLineBasedInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x140588528 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectInterrupt @ 0x14058887C (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140588E44 (IopGetInterruptConnectionData.c)
 *     IopConnectInterruptFullySpecified @ 0x1405CF874 (IopConnectInterruptFullySpecified.c)
 */

NTSTATUS __stdcall IoConnectInterruptEx(PIO_CONNECT_INTERRUPT_PARAMETERS Parameters)
{
  __int64 Version; // rcx
  NTSTATUS result; // eax
  KIRQL SynchronizeIrql; // al
  KIRQL Irql; // dl
  char v6; // di
  USHORT Group; // si
  PVOID v8; // rdi
  unsigned int v9; // edx
  __int64 v10; // rcx
  KIRQL v11; // al
  __int64 v12; // rcx
  __m128i v13; // xmm2
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  NTSTATUS v17; // esi
  PKSPIN_LOCK SpinLock; // r9
  PVOID ServiceContext; // r8
  PKSERVICE_ROUTINE ServiceRoutine; // rdx
  PKINTERRUPT *InterruptObject; // rcx
  ULONG Vector; // [rsp+28h] [rbp-59h]
  KIRQL v24; // [rsp+30h] [rbp-51h]
  KIRQL v25; // [rsp+38h] [rbp-49h]
  KINTERRUPT_MODE InterruptMode; // [rsp+40h] [rbp-41h]
  BOOLEAN ShareVector; // [rsp+48h] [rbp-39h]
  KAFFINITY ProcessorEnableMask; // [rsp+68h] [rbp-19h] BYREF
  __int64 v29; // [rsp+70h] [rbp-11h]
  _QWORD v30[12]; // [rsp+78h] [rbp-9h] BYREF
  PVOID P; // [rsp+F0h] [rbp+6Fh] BYREF

  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  Version = Parameters->Version;
  switch ( (_DWORD)Version )
  {
    case 1:
      goto LABEL_48;
    case 2:
      return IopConnectLineBasedInterrupt(
               Parameters->FullySpecified.PhysicalDeviceObject,
               Parameters->FullySpecified.InterruptObject,
               (__int64)Parameters->FullySpecified.ServiceRoutine);
    case 3:
      goto LABEL_5;
    case 4:
LABEL_48:
      if ( !Parameters->FullySpecified.PhysicalDeviceObject )
        return -1073741811;
      if ( !Parameters->FullySpecified.ServiceRoutine )
        return -1073741811;
      SynchronizeIrql = Parameters->FullySpecified.SynchronizeIrql;
      Irql = Parameters->FullySpecified.Irql;
      if ( SynchronizeIrql < Irql )
        return -1073741811;
      if ( SynchronizeIrql || Irql )
      {
        v6 = 0;
      }
      else
      {
        v6 = 1;
        if ( Parameters->FullySpecified.SpinLock )
          return -1073741811;
      }
      if ( (_DWORD)Version == 4 )
        Group = Parameters->FullySpecified.Group;
      else
        Group = 0;
      if ( (int)IopGetInterruptConnectionData(Parameters->FullySpecified.PhysicalDeviceObject) >= 0 )
      {
        memset(v30, 0, sizeof(v30));
        v8 = P;
        v9 = 0;
        LODWORD(v30[0]) = 0;
        if ( *(_DWORD *)P )
        {
          while ( 1 )
          {
            v10 = 88LL * v9;
            if ( *(_DWORD *)((char *)P + v10 + 12) == Parameters->FullySpecified.Vector )
            {
              v11 = Parameters->FullySpecified.Irql;
              if ( (*((_BYTE *)P + v10 + 16) == v11 || !v11)
                && *(_DWORD *)((char *)P + v10 + 24) == Parameters->FullySpecified.InterruptMode
                && *(_WORD *)((char *)P + v10 + 40) == Group
                && *(_QWORD *)((char *)P + v10 + 32) == Parameters->FullySpecified.ProcessorEnableMask )
              {
                break;
              }
            }
            if ( ++v9 >= *(_DWORD *)P )
              goto LABEL_44;
          }
          v12 = 88LL * v9;
          LODWORD(v30[0]) = 1;
          v13 = *(__m128i *)((char *)P + v12 + 8);
          v14 = *(_OWORD *)((char *)P + v12 + 40);
          *(_OWORD *)&v30[3] = *(_OWORD *)((char *)P + v12 + 24);
          v15 = *(_OWORD *)((char *)P + v12 + 56);
          *(_OWORD *)&v30[5] = v14;
          v16 = *(_OWORD *)((char *)P + v12 + 72);
          *(_OWORD *)&v30[7] = v15;
          v30[11] = *(_QWORD *)((char *)P + v12 + 88);
          *(__m128i *)&v30[1] = v13;
          *(_OWORD *)&v30[9] = v16;
          if ( !_mm_cvtsi128_si32(v13) && (v30[8] & 0x100000000LL) != 0 )
            Parameters->FullySpecified.ShareVector = 1;
          v17 = IopConnectInterrupt(
                  (unsigned int)&P,
                  Parameters->FullySpecified.ServiceRoutine,
                  0,
                  Parameters->FullySpecified.ServiceContext,
                  0,
                  (__int64)Parameters->FullySpecified.SpinLock,
                  Parameters->FullySpecified.SynchronizeIrql,
                  Parameters->FullySpecified.ShareVector);
          if ( v17 >= 0 )
            *Parameters->FullySpecified.InterruptObject = (PKINTERRUPT)((char *)P + 112);
          ExFreePoolWithTag(v8, 0);
          return v17;
        }
LABEL_44:
        ExFreePoolWithTag(P, 0);
        return -1073741637;
      }
      if ( v6 )
        return -1073741637;
      SpinLock = Parameters->FullySpecified.SpinLock;
      ServiceContext = Parameters->FullySpecified.ServiceContext;
      ServiceRoutine = Parameters->FullySpecified.ServiceRoutine;
      InterruptObject = Parameters->FullySpecified.InterruptObject;
      v29 = 0LL;
      ProcessorEnableMask = Parameters->FullySpecified.ProcessorEnableMask;
      ShareVector = Parameters->FullySpecified.ShareVector;
      InterruptMode = Parameters->FullySpecified.InterruptMode;
      v25 = Parameters->FullySpecified.SynchronizeIrql;
      v24 = Parameters->FullySpecified.Irql;
      Vector = Parameters->FullySpecified.Vector;
      LOWORD(v29) = Group;
      return IopConnectInterruptFullySpecified(
               (_DWORD)InterruptObject,
               (_DWORD)ServiceRoutine,
               (_DWORD)ServiceContext,
               (_DWORD)SpinLock,
               Vector,
               v24,
               v25,
               InterruptMode,
               ShareVector,
               (__int64)&ProcessorEnableMask);
  }
  if ( (_DWORD)Version != 5 )
  {
    Parameters->Version = 3;
    return -1073741637;
  }
LABEL_5:
  result = IopConnectMessageBasedInterrupt(
             Version,
             Parameters->FullySpecified.PhysicalDeviceObject,
             Parameters->FullySpecified.InterruptObject,
             Parameters->FullySpecified.ServiceRoutine,
             Parameters->FullySpecified.ServiceContext,
             Parameters->FullySpecified.SpinLock,
             Parameters->FullySpecified.SynchronizeIrql);
  if ( result < 0 )
  {
    if ( Parameters->MessageBased.FallBackServiceRoutine )
    {
      v17 = IopConnectLineBasedInterrupt(
              Parameters->FullySpecified.PhysicalDeviceObject,
              Parameters->FullySpecified.InterruptObject,
              (__int64)Parameters->MessageBased.FallBackServiceRoutine);
      Parameters->Version = 2;
      return v17;
    }
    return -1073741637;
  }
  return result;
}

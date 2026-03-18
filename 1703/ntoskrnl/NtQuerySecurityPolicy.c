/*
 * XREFs of NtQuerySecurityPolicy @ 0x1406F01C0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepCaptureUnicodeStringArray @ 0x1404F7B70 (SepCaptureUnicodeStringArray.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQuerySecurityPolicy(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        volatile void *Address,
        unsigned __int64 a6)
{
  PVOID PoolWithQuotaTag; // rsi
  char PreviousMode; // r14
  int v11; // ebx
  _DWORD *v12; // r12
  unsigned int v13; // eax
  void *v14; // r15
  unsigned int v15; // eax
  unsigned int NumberOfBytes; // [rsp+44h] [rbp-54h] BYREF
  int NumberOfBytes_4; // [rsp+48h] [rbp-50h] BYREF
  volatile void *v19; // [rsp+50h] [rbp-48h]
  PVOID P; // [rsp+58h] [rbp-40h] BYREF
  PVOID v21; // [rsp+60h] [rbp-38h] BYREF
  PVOID v22[3]; // [rsp+68h] [rbp-30h] BYREF

  P = 0LL;
  v21 = 0LL;
  PoolWithQuotaTag = 0LL;
  v19 = 0LL;
  v22[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = SepCaptureUnicodeStringArray(a1, 1u, PreviousMode, &P);
  if ( v11 >= 0 )
  {
    v11 = SepCaptureUnicodeStringArray(a2, 1u, PreviousMode, &v21);
    if ( v11 >= 0 )
    {
      v11 = SepCaptureUnicodeStringArray(a3, 1u, PreviousMode, v22);
      if ( v11 >= 0 )
      {
        if ( PreviousMode == 1 )
        {
          if ( (a4 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( a4 + 4 > 0x7FFFFFFF0000LL || a4 + 4 < a4 )
            MEMORY[0x7FFFFFFF0000] = 0;
          NumberOfBytes_4 = *(_DWORD *)a4;
          v12 = (_DWORD *)a6;
          if ( (a6 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( a6 + 4 > 0x7FFFFFFF0000LL || a6 + 4 < a6 )
            MEMORY[0x7FFFFFFF0000] = 0;
          v13 = *(_DWORD *)a6;
          NumberOfBytes = *(_DWORD *)a6;
          v14 = (void *)Address;
          if ( Address )
          {
            ProbeForWrite(Address, v13, 1u);
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, NumberOfBytes, 0x20206553u);
            v19 = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              v11 = -1073741670;
              goto LABEL_29;
            }
          }
        }
        else
        {
          NumberOfBytes_4 = *(_DWORD *)a4;
          v14 = (void *)Address;
          PoolWithQuotaTag = (PVOID)Address;
          v19 = Address;
          v12 = (_DWORD *)a6;
          NumberOfBytes = *(_DWORD *)a6;
        }
        if ( qword_140348C18 )
        {
          if ( !PoolWithQuotaTag || NumberOfBytes )
            v11 = qword_140348C18(P, v21, v22[0], &NumberOfBytes_4, PoolWithQuotaTag, &NumberOfBytes);
          else
            v11 = -1073741811;
        }
        else
        {
          v11 = -1073741637;
        }
        if ( v11 >= 0 )
        {
          *(_DWORD *)a4 = NumberOfBytes_4;
          v15 = NumberOfBytes;
          *v12 = NumberOfBytes;
          if ( v14 )
          {
            if ( PreviousMode == 1 )
              memmove(v14, PoolWithQuotaTag, v15);
          }
        }
      }
    }
  }
LABEL_29:
  if ( PreviousMode == 1 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    if ( v22[0] )
      ExFreePoolWithTag(v22[0], 0);
  }
  if ( PoolWithQuotaTag && PreviousMode == 1 )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return (unsigned int)v11;
}

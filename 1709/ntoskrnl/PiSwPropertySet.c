/*
 * XREFs of PiSwPropertySet @ 0x1405997C8
 * Callers:
 *     PiSwIrpInterfacePropertySet @ 0x14044D7EC (PiSwIrpInterfacePropertySet.c)
 *     PiSwCompleteCreate @ 0x1405BAE84 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1405BB304 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfaceRegister @ 0x1405E2314 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpPropertySet @ 0x1406CE008 (PiSwIrpPropertySet.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x1405264F8 (_PnpOpenObjectRegKey.c)
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140528D6C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlSetObjectProperty @ 0x14052F53C (PiPnpRtlSetObjectProperty.c)
 */

__int64 __fastcall PiSwPropertySet(const WCHAR *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  int v8; // ebx
  unsigned int v9; // esi
  unsigned int **v10; // rdi
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF
  PVOID P; // [rsp+58h] [rbp-20h] BYREF

  P = 0LL;
  Handle = 0LL;
  v8 = PiPnpRtlBeginOperation((__int64 **)&P);
  if ( v8 >= 0 )
  {
    v8 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)a1, a2, 7, 0, (__int64)&Handle, 0LL, 0);
    if ( v8 >= 0 )
    {
      v9 = 0;
      if ( a4 )
      {
        v10 = (unsigned int **)(a3 + 40);
        do
        {
          v8 = PiPnpRtlSetObjectProperty(
                 *(__int64 *)&PiPnpRtlCtx,
                 a1,
                 a2,
                 (__int64)Handle,
                 (__int64)*(v10 - 2),
                 (__int64)(v10 - 5),
                 *((_DWORD *)v10 - 2),
                 *v10,
                 *((_DWORD *)v10 - 1),
                 0);
          if ( v8 == -1073741275 )
          {
            if ( *((_DWORD *)v10 - 2) )
              break;
            v8 = 0;
          }
          if ( v8 < 0 )
            break;
          ++v9;
          v10 += 6;
        }
        while ( v9 < a4 );
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v8;
}

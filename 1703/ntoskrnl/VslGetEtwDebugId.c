/*
 * XREFs of VslGetEtwDebugId @ 0x1401ED018
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x140448030 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x1401EDEB8 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401EE0D4 (VslpUnlockPagesForTransfer.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslGetEtwDebugId(__int64 a1, __int64 a2, void **a3, unsigned int *a4)
{
  void *v4; // rbx
  NTSTATUS v9; // edi
  PVOID PoolWithTag; // rax
  _QWORD v12[8]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v13[8]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+78h] [rbp-A0h]
  __int64 v15; // [rsp+80h] [rbp-98h]
  __int64 v16; // [rsp+88h] [rbp-90h]
  __int64 v17; // [rsp+90h] [rbp-88h]
  unsigned int v18; // [rsp+98h] [rbp-80h]

  v4 = *a3;
  v9 = VslpLockPagesForTransfer((unsigned int)v12, (unsigned int)*a3, *a4, 2, 0);
  if ( v9 < 0 )
  {
LABEL_12:
    if ( v4 != *a3 && v4 )
      ExFreePoolWithTag(v4, 0);
  }
  else
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(a1 + 720);
      v17 = v12[7];
      v16 = v12[0];
      v15 = a2;
      v9 = VslpEnterIumSecureMode(1, 16LL, 0LL, (__int64)v13);
      VslpUnlockPagesForTransfer(v12);
      *a4 = v18;
      if ( v9 >= 0 )
        break;
      if ( v9 != -1073741789 )
        goto LABEL_10;
      if ( v4 != *a3 )
        ExFreePoolWithTag(v4, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *a4, 0x54736D56u);
      v4 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v9 = -1073741670;
LABEL_10:
        if ( v9 < 0 )
          goto LABEL_12;
        break;
      }
      v9 = VslpLockPagesForTransfer((unsigned int)v12, (_DWORD)PoolWithTag, *a4, 2, 0);
      if ( v9 < 0 )
        goto LABEL_10;
    }
    *a3 = v4;
  }
  return (unsigned int)v9;
}

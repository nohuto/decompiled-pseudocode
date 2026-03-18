/*
 * XREFs of NtDCompositionGetDeletedResources @ 0x1C0089660
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0023924 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?GetTags@CDeletedNotificationList@DirectComposition@@QEAAXKPEA_KPEAK@Z @ 0x1C007C4A4 (-GetTags@CDeletedNotificationList@DirectComposition@@QEAAXKPEA_KPEAK@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall NtDCompositionGetDeletedResources(unsigned int a1, unsigned int a2, char *a3, unsigned int *a4)
{
  __int64 v6; // r15
  int v8; // ebx
  char *v9; // rdx
  unsigned int v11; // [rsp+20h] [rbp-98h] BYREF
  struct DirectComposition::CApplicationChannel *v12; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int64 Src[8]; // [rsp+30h] [rbp-88h] BYREF

  v6 = a2;
  v8 = 0;
  v12 = 0LL;
  memset(Src, 0, sizeof(Src));
  if ( (unsigned int)(v6 - 1) > 7 || !a3 || !a4 )
    v8 = -1073741811;
  if ( v8 >= 0 )
  {
    v8 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v12);
    if ( v8 >= 0 )
    {
      DirectComposition::CDeletedNotificationList::GetTags(
        (struct DirectComposition::CApplicationChannel *)((char *)v12 + 472),
        v6,
        Src,
        &v11);
      _guard_dispatch_icall_fptr();
      v9 = &a3[8 * v6];
      if ( (unsigned __int64)v9 > MmUserProbeAddress || v9 <= a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a3, Src, 8 * v6);
      if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a4 = v11;
    }
  }
  return (unsigned int)v8;
}

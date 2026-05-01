/*
 * XREFs of PsmMemoryLimitNotification2 @ 0x18001E7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000C090 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180026AA5 (memcpy_0.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

void __fastcall PsmMemoryLimitNotification2(
        void *Src,
        int a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  DWORD v5; // ebx
  int v10; // ebx
  ULONG v11; // eax
  DWORD v12; // ebx
  _QWORD v13[8]; // [rsp+30h] [rbp-C8h] BYREF
  int v14; // [rsp+70h] [rbp-88h]
  _BYTE TlsValue[80]; // [rsp+80h] [rbp-78h] BYREF

  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
    {
      v10 = 0;
      goto LABEL_7;
    }
    v5 = HampLockTrackerId;
  }
  memset_0(TlsValue, 0, 0x48uLL);
  if ( v5 != -1 )
  {
    TlsGetValue(v5);
    TlsSetValue(v5, TlsValue);
  }
  v10 = 1;
LABEL_7:
  memset(v13, 0, sizeof(v13));
  v14 = 0;
  v11 = RtlLengthSid(Src);
  memcpy_0(v13, Src, v11);
  ModernResourceEnforcer::MemoryLimitNotification(
    *((ModernResourceEnforcer **)RmSvcGlobals + 7),
    (union _RM_SID *)v13,
    a2,
    a3,
    a4,
    a5);
  if ( v10 )
  {
    v12 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v12, 0LL);
    }
  }
}

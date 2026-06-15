/*
 * XREFs of ?SubscribeWnfNotification@CDriverListener@@AEAAJU_WNF_STATE_NAME@@PEAPEAU_WNF_USER_SUBSCRIPTION@@P6AJ0KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z@Z @ 0x180023338
 * Callers:
 *     ??0CDriverListener@@QEAA@XZ @ 0x1800231B0 (--0CDriverListener@@QEAA@XZ.c)
 * Callees:
 *     McTemplateU0dsdp @ 0x180021C98 (McTemplateU0dsdp.c)
 */

__int64 __fastcall CDriverListener::SubscribeWnfNotification(
        CDriverListener *this,
        struct _WNF_STATE_NAME a2,
        struct _WNF_USER_SUBSCRIPTION **a3,
        int (*a4)(struct _WNF_STATE_NAME, unsigned int, struct _WNF_TYPE_ID *, void *, const void *, unsigned int))
{
  unsigned int v4; // ebx
  char v5; // si
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi

  v4 = 0;
  v5 = (char)this;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))RtlSubscribeWnfStateChangeNotification)(
         a3,
         a2,
         0LL,
         a4,
         this,
         0LL,
         0,
         0);
  v8 = v6 | 0x10000000;
  if ( v6 < 0 )
  {
    if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
      McTemplateU0dsdp(v7, &EUVolumePolicy_Error_Propagation, v8, "CDriverListener::SubscribeWnfNotification", 55, v5);
    return v8;
  }
  return v4;
}

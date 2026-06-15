/*
 * XREFs of ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000EC20
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180029750 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     ??$emplace@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@1@AEBVWeakRef@WRL@Microsoft@@@Z @ 0x18002F638 (--$emplace@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WR.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::AddSaDevice(
        CDeviceGraphObjectsStore *this,
        const struct SaDeviceParams *a2,
        struct Microsoft::WRL::WeakRef *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  unsigned int v8; // esi
  _QWORD *v9; // rcx
  char v11[48]; // [rsp+28h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+68h] [rbp+10h]

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v8 = 0;
  try
  {
    v9 = (_QWORD *)((char *)this + 16 * *((int *)a2 + 2) + 8 * *((int *)a2 + 2) + 80);
    std::vector<Microsoft::WRL::WeakRef>::emplace<Microsoft::WRL::WeakRef const &>(v9, v11, *v9, a3, -2LL);
  }
  catch ( std::bad_alloc )
  {
    v8 = -2147024882;
    v7 = v12;
    v6 = v12;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_1c09718e5e7b33997c2f06ecaa90c919_Traceguids, v8);
  }
  if ( v6 )
    LeaveCriticalSection(v7);
  return v8;
}

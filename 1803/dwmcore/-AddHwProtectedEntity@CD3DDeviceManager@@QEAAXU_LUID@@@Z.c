/*
 * XREFs of ?AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x1801DDC8C
 * Callers:
 *     ?UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180049404 (-UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ??0CBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x180049798 (--0CBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitm.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 */

void __fastcall CD3DDeviceManager::AddHwProtectedEntity(CD3DDeviceManager *this, struct _LUID a2)
{
  int v2; // edi
  __int64 v3; // r9
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // r8d
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // r9d
  struct _LUID v13; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+38h] [rbp-20h]

  v2 = CD3DDeviceManager::s_cHwProtectedEntities;
  v3 = 0LL;
  v13 = a2;
  if ( *((_DWORD *)this + 26) )
  {
    v5 = *((_QWORD *)this + 10);
    while ( *(_QWORD *)(v5 + 12 * v3) != __PAIR64__(v13.HighPart, a2.LowPart) )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 26) )
        goto LABEL_5;
    }
    ++*(_DWORD *)(v5 + 12 * v3 + 8);
  }
  else
  {
LABEL_5:
    v6 = *((unsigned int *)this + 26);
    v13 = a2;
    v14 = 1;
    v7 = v6 + 1;
    v8 = (int)v6 + 1 < (unsigned int)v6 ? 0x80070216 : 0;
    if ( (int)v6 + 1 < (unsigned int)v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
    }
    else if ( v7 > *((_DWORD *)this + 25) )
    {
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 80, 0xCu, 1, &v13);
      v8 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u);
    }
    else
    {
      v9 = *((_QWORD *)this + 10);
      v10 = 3 * v6;
      *(struct _LUID *)(v9 + 4 * v10) = v13;
      *(_DWORD *)(v9 + 4 * v10 + 8) = v14;
      *((_DWORD *)this + 26) = v7;
    }
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x646u);
  }
  v12 = ++CD3DDeviceManager::s_cHwProtectedEntities;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTED_ENTITY_CHANGE, v2, v12);
}

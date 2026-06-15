/*
 * XREFs of PackSysFx2List @ 0x1800393D0
 * Callers:
 *     GetPackedSysFx2List @ 0x18003931C (GetPackedSysFx2List.c)
 * Callees:
 *     ?GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z @ 0x180039510 (-GetEffectsList@CCompositeSystemEffect@@UEAAJPEAPEAU_GUID@@PEAIPEAX@Z.c)
 *     _Init_thread_footer @ 0x1800494C8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180049528 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PackSysFx2List(CCompositeSystemEffect *this, _DWORD *a2)
{
  __int64 (__fastcall *v4)(CCompositeSystemEffect *__hidden, struct _GUID **, unsigned int *, void *); // rax
  int EffectsList; // eax
  unsigned int v6; // ebx
  void *v7; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+58h] [rbp+10h] BYREF

  if ( dword_18012C424 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18012C424);
    if ( dword_18012C424 == -1 )
    {
      xmmword_18012C3C0 = (__int128)GUID_6f64adc8_8211_11e2_8c70_2c27d7f001fa;
      dword_18012C3D0 = 2048;
      xmmword_18012C3D4 = (__int128)GUID_6f64adcc_8211_11e2_8c70_2c27d7f001fa;
      dword_18012C3E4 = 0x8000;
      xmmword_18012C3E8 = (__int128)GUID_6f64adcd_8211_11e2_8c70_2c27d7f001fa;
      dword_18012C3F8 = 0x10000;
      xmmword_18012C3FC = (__int128)GUID_6f64adce_8211_11e2_8c70_2c27d7f001fa;
      dword_18012C40C = 0x20000;
      Init_thread_footer(&dword_18012C424);
    }
  }
  *a2 = 0;
  if ( !this )
    return 0LL;
  pv = 0LL;
  v4 = *(__int64 (__fastcall **)(CCompositeSystemEffect *__hidden, struct _GUID **, unsigned int *, void *))(*(_QWORD *)this + 24LL);
  if ( v4 == CCompositeSystemEffect::GetEffectsList )
    EffectsList = CCompositeSystemEffect::GetEffectsList(this, (struct _GUID **)&pv, &v15, 0LL);
  else
    EffectsList = v4(this, (struct _GUID **)&pv, &v15, 0LL);
  v6 = EffectsList;
  if ( EffectsList < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x80,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)EffectsList,
      v13);
    v7 = pv;
  }
  else
  {
    v7 = pv;
    if ( v15 )
    {
      v9 = pv;
      v10 = v15;
      do
      {
        v11 = 0LL;
        while ( 1 )
        {
          v12 = *(_QWORD *)((char *)&xmmword_18012C3C0 + 20 * v11) - *v9;
          if ( !v12 )
            v12 = *(_QWORD *)((char *)&xmmword_18012C3C0 + 20 * v11 + 8) - v9[1];
          if ( !v12 )
            break;
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= 4 )
            goto LABEL_22;
        }
        *a2 |= *((_DWORD *)&xmmword_18012C3C0 + 5 * v11 + 4);
LABEL_22:
        v9 += 2;
        --v10;
      }
      while ( v10 );
    }
    v6 = 0;
  }
  CoTaskMemFree(v7);
  return v6;
}

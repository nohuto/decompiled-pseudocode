/*
 * XREFs of ?GetViewData@CImmersiveWindowCollection@CImmersiveApp@@QEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z @ 0x1800F934C
 * Callers:
 *     ?GetViewDataInternal@CImmersiveApp@@UEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z @ 0x18012E5F0 (-GetViewDataInternal@CImmersiveApp@@UEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::GetViewData(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct IMMAPP_APPLICATION_VIEW_DATA *a2)
{
  bool v3; // zf
  char v4; // cl
  __int64 v5; // xmm0_8
  __int128 v6; // xmm1

  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 4) = 3LL;
  *((_QWORD *)a2 + 5) = 0LL;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_QWORD *)a2 + 7) = 0LL;
  *((_DWORD *)a2 + 16) = 0;
  *((_DWORD *)a2 + 17) = 3;
  if ( *((_DWORD *)this + 8) == -1 || (v3 = *((_DWORD *)this + 17) == -1, v4 = 1, v3) )
    v4 = 0;
  if ( v4 )
  {
    *(_OWORD *)a2 = *((_OWORD *)this + 2);
    *((_OWORD *)a2 + 1) = *((_OWORD *)this + 3);
    *((_DWORD *)a2 + 8) = *((_DWORD *)this + 16);
    v5 = *(_QWORD *)((char *)this + 100);
    v6 = *(_OWORD *)((char *)this + 84);
    *(_OWORD *)((char *)a2 + 36) = *(_OWORD *)((char *)this + 68);
    *(_OWORD *)((char *)a2 + 52) = v6;
    *((_DWORD *)a2 + 17) = v5;
  }
  return v4 == 0 ? 0x80070490 : 0;
}

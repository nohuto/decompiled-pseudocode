/*
 * XREFs of ?GetViewDataInternal@CImmersiveApp@@UEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z @ 0x18012E5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewData@CImmersiveWindowCollection@CImmersiveApp@@QEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z @ 0x1800F934C (-GetViewData@CImmersiveWindowCollection@CImmersiveApp@@QEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z.c)
 */

__int64 __fastcall CImmersiveApp::GetViewDataInternal(CImmersiveApp *this, struct IMMAPP_APPLICATION_VIEW_DATA *a2)
{
  char v3; // cl
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 4) = 3LL;
  *((_DWORD *)a2 + 17) = 3;
  *((_QWORD *)a2 + 5) = 0LL;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_QWORD *)a2 + 7) = 0LL;
  *((_DWORD *)a2 + 16) = 0;
  v3 = *((_BYTE *)this + 576);
  result = v3 != 0 ? 0x8007139F : 0;
  if ( !v3 )
    return CImmersiveApp::CImmersiveWindowCollection::GetViewData((CImmersiveApp *)((char *)this + 152), a2);
  return result;
}

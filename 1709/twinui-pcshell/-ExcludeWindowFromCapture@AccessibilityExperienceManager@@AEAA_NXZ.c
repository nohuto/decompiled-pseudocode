/*
 * XREFs of ?ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ @ 0x1801B2380
 * Callers:
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x1801B17BC (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall AccessibilityExperienceManager::ExcludeWindowFromCapture(AccessibilityExperienceManager *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  char v3; // di
  int v4; // ebx
  bool v5; // al
  __int64 v6; // rcx
  __int128 v8; // [rsp+28h] [rbp-38h] BYREF
  __int64 v9; // [rsp+38h] [rbp-28h]
  __int128 v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-10h]
  int v12; // [rsp+80h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+28h] BYREF
  __int64 v14; // [rsp+90h] [rbp+30h] BYREF

  v13 = 0LL;
  v1 = 0LL;
  v14 = 0LL;
  v2 = *((_QWORD *)this + 48);
  if ( v2 )
  {
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 32LL))(v2, &v13) < 0
      || (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v14) < 0 )
    {
      goto LABEL_7;
    }
    v1 = v14;
  }
  v3 = 1;
  v12 = 1;
  LODWORD(v8) = 25;
  *((_QWORD *)&v8 + 1) = &v12;
  LODWORD(v9) = 4;
  v4 = SetWindowCompositionAttribute(v1, &v8);
  LODWORD(v10) = 24;
  *((_QWORD *)&v10 + 1) = &v12;
  LODWORD(v11) = 4;
  v8 = v10;
  v9 = v11;
  v5 = (unsigned int)SetWindowCompositionAttribute(v14, &v8) != 0;
  if ( !v4 || !v5 )
LABEL_7:
    v3 = 0;
  v6 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v3;
}

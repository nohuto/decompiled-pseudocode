/*
 * XREFs of ?_AddNotificationsAndResolve@CImmersiveApp@@AEAAJQEBUAPP_CHANGE_INFO@@_KPEAPEAU2@PEA_K@Z @ 0x180056BE0
 * Callers:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x18005681C (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180058298 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194F9C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::_AddNotificationsAndResolve(
        CImmersiveApp *this,
        const struct APP_CHANGE_INFO *const a2,
        unsigned __int64 a3,
        struct APP_CHANGE_INFO **a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v5; // r13
  struct APP_CHANGE_INFO **v7; // r12
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  const struct APP_CHANGE_INFO *v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  struct APP_CHANGE_INFO *v14; // rax
  struct APP_CHANGE_INFO *v15; // r14
  unsigned int v16; // r15d
  char *v17; // rbx
  _QWORD *v18; // rdi
  unsigned __int8 (__fastcall *v19)(CImmersiveApp *); // rax
  __int64 v20; // r8
  unsigned __int64 i; // rdx
  int v22; // ecx

  *a4 = 0LL;
  v5 = a5;
  v7 = a4;
  v8 = a3;
  v9 = a3;
  *a5 = 0LL;
  if ( a3 )
  {
    v10 = a2;
    v11 = v9;
    do
    {
      v12 = *(int *)v10;
      v10 = (const struct APP_CHANGE_INFO *)((char *)v10 + 16);
      v9 += qword_18023E180[4 * v12 + 2];
      --v11;
    }
    while ( v11 );
  }
  v13 = 16 * v9;
  if ( !is_mul_ok(v9, 0x10uLL) )
    v13 = -1LL;
  v14 = (struct APP_CHANGE_INFO *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v14;
  v16 = v14 == 0LL ? 0x8007000E : 0;
  if ( v14 )
  {
    v17 = (char *)v14;
    if ( v8 )
    {
      do
      {
        *(_OWORD *)v17 = *(_OWORD *)a2;
        if ( *(_DWORD *)v17 != 6 && *(_DWORD *)v17 != 12 && !*((_QWORD *)v17 + 1) )
          *((_QWORD *)v17 + 1) = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp *)((char *)this + 224));
        v18 = &qword_18023E180[4 * *(int *)a2];
        if ( v18[1] )
        {
          v19 = (unsigned __int8 (__fastcall *)(CImmersiveApp *))v18[3];
          if ( !v19 || v19(this) )
          {
            v20 = *((_QWORD *)v17 + 1);
            for ( i = 0LL; i < v18[2]; *((_QWORD *)v17 + 1) = v20 )
            {
              v17 += 16;
              v22 = *(_DWORD *)(v18[1] + 4 * i++);
              *(_DWORD *)v17 = v22;
            }
          }
        }
        v17 += 16;
        a2 = (const struct APP_CHANGE_INFO *const)((char *)a2 + 16);
        --v8;
      }
      while ( v8 );
      v7 = a4;
      v5 = a5;
    }
    *v7 = v15;
    *v5 = (v17 - (char *)v15) >> 4;
  }
  return v16;
}

/*
 * XREFs of NtDWMBindCursorToOutputConfig @ 0x1C00E5710
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     ?BindMouse@CInputConfig@@QEAAJPEAU_LUID@@@Z @ 0x1C012FBA0 (-BindMouse@CInputConfig@@QEAAJPEAU_LUID@@@Z.c)
 */

__int64 __fastcall NtDWMBindCursorToOutputConfig(struct _LUID *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  int v8; // ebx
  BOOL v9; // edx
  ULONG v10; // ecx
  CInputConfig *v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v18; // [rsp+68h] [rbp+10h] BYREF
  struct _LUID v19; // [rsp+70h] [rbp+18h] BYREF
  char v20; // [rsp+78h] [rbp+20h] BYREF

  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v18, a2, a3, a4);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v20);
  CurrentProcess = (PVOID)PsGetCurrentProcess(v6, v5);
  v8 = 0;
  v9 = 0;
  if ( CurrentProcess )
    v9 = CurrentProcess == g_pepDwm;
  if ( v9 )
  {
    v11 = (CInputConfig *)&a1[1];
    if ( &a1[1] < a1 || (unsigned __int64)v11 > MmUserProbeAddress )
      a1 = (struct _LUID *)MmUserProbeAddress;
    v19 = *a1;
    v12 = CInputConfig::BindMouse(v11, &v19);
    if ( v12 >= 0 )
    {
      v8 = 1;
      goto LABEL_12;
    }
    v10 = RtlNtStatusToDosError(v12);
  }
  else
  {
    v10 = 5;
  }
  UserSetLastError(v10);
LABEL_12:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v20);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v8;
}

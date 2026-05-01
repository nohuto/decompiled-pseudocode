/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_673908d937c0411dbdcd60700f9c4b37___::Run @ 0x18016D890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18018EF10 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_673908d937c0411dbdcd60700f9c4b37___::Run(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = ActivateApplicationForExperienceWithPropertySet(
         *(_QWORD *)(a1 + 16),
         &unk_1801C6ABC,
         L"TouchKeyboardExperienceId");
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DD,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v1);
}

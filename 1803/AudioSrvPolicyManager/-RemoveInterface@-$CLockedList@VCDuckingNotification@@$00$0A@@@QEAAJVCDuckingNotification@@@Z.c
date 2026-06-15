/*
 * XREFs of ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18000EC68
 * Callers:
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18000CF30 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18000F228 (-RemoveAt@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001013C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180035AB6 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLockedList<CDuckingNotification,1,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        __int64 a2)
{
  __int64 v2; // rsi
  LPCRITICAL_SECTION v3; // rbx
  unsigned int v4; // r14d
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  bool v7; // al
  unsigned __int64 v8; // rdx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  char *v10; // r8
  ULONG_PTR SpinCount; // rax
  const void *v12; // rdx
  size_t v13; // r8
  __int64 i; // rdx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rdx
  ATL::CAtlException *v18; // [rsp+28h] [rbp-20h] BYREF

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  try
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v5 = (unsigned int)i;
      if ( (unsigned __int64)(unsigned int)i >= *(_QWORD *)&v3[1].LockCount )
        goto LABEL_32;
      v6 = (__int64)v3[1].DebugInfo + 32 * (unsigned int)i;
      if ( *(_DWORD *)(v6 + 8) != *(_DWORD *)(v2 + 8) )
        break;
      if ( *(_QWORD *)v6 && *(_QWORD *)v2 )
      {
        v7 = *(_QWORD *)v6 == *(_QWORD *)v2;
        goto LABEL_8;
      }
LABEL_9:
      if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v3[2].DebugInfo )
        ATL::AtlThrowImpl(-2147024809);
      --*(_DWORD *)(v3[1].SpinCount + 4 * i);
      if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v3[2].DebugInfo )
        ATL::AtlThrowImpl(-2147024809);
      if ( !*(_DWORD *)(v3[1].SpinCount + 4 * i) )
      {
        ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::RemoveAt(
          &v3[1],
          (unsigned int)i);
        v8 = v5 + 1;
        if ( v5 + 1 < v5 || (DebugInfo = v3[2].DebugInfo, v8 > (unsigned __int64)DebugInfo) )
          ATL::AtlThrowImpl(-2147024809);
        v10 = (char *)DebugInfo - v8;
        if ( DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)v8 )
        {
          SpinCount = v3[1].SpinCount;
          v12 = (const void *)(SpinCount + 4 * v8);
          v13 = 4LL * (_QWORD)v10;
          if ( v13 )
          {
            if ( !(SpinCount + 4 * v5) || !v12 )
            {
              *(_DWORD *)_o__errno(DebugInfo, v12) = 22;
              invalid_parameter_noinfo();
              ATL::AtlThrowImpl(-2147024809);
            }
            memmove((void *)(SpinCount + 4 * v5), v12, v13);
            DebugInfo = v3[2].DebugInfo;
          }
        }
        v3[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)((char *)DebugInfo - 1);
        goto LABEL_32;
      }
LABEL_20:
      ;
    }
    v7 = 0;
LABEL_8:
    if ( !v7 )
      goto LABEL_20;
    goto LABEL_9;
  }
  catch ( ATL::CAtlException *v18 )
  {
    v3 = lpCriticalSection;
    v2 = a2;
    v4 = *(_DWORD *)v18;
  }
LABEL_32:
  LeaveCriticalSection(v3);
  v15 = *(_QWORD *)(v2 + 24);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = (volatile signed __int32 *)(*(_QWORD *)(v2 + 16) - 24LL);
  if ( _InterlockedExchangeAdd(v16 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v16 + 8LL))(*(_QWORD *)v16);
  return v4;
}

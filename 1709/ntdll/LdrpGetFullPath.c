/*
 * XREFs of LdrpGetFullPath @ 0x18004DD58
 * Callers:
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     LdrpPreprocessDllName @ 0x1800318FC (LdrpPreprocessDllName.c)
 *     LdrpApplyFileNameRedirection @ 0x180031AA8 (LdrpApplyFileNameRedirection.c)
 *     LdrpResolveDllName @ 0x18004DA64 (LdrpResolveDllName.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180031338 (NtdllpAllocateStringRoutine.c)
 *     RtlGetFullPathName_Ustr @ 0x180033160 (RtlGetFullPathName_Ustr.c)
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall LdrpGetFullPath(unsigned __int16 *a1, __int64 a2)
{
  unsigned int FullPathName_Ustr; // eax
  unsigned int v5; // ebx
  __int16 v6; // si
  _WORD *StringRoutine; // r14
  __int64 v9; // rcx
  char v10; // [rsp+68h] [rbp+10h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+74h] [rbp+1Ch]
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  FullPathName_Ustr = RtlGetFullPathName_Ustr(
                        a1,
                        *(unsigned __int16 *)(a2 + 2),
                        *(wchar_t **)(a2 + 8),
                        &v13,
                        &v10,
                        (__int64)&v11);
  v5 = 0;
  while ( 1 )
  {
    v6 = FullPathName_Ustr;
    if ( v10 )
      break;
    if ( !FullPathName_Ustr || FullPathName_Ustr > 0xFFFE )
      return (unsigned int)-1073741562;
    if ( v11 == 5 && (LdrpIllegalCWDDevices & v12) != 0 )
      break;
    if ( FullPathName_Ustr < *(unsigned __int16 *)(a2 + 2) )
    {
      *(_WORD *)a2 = FullPathName_Ustr;
      return v5;
    }
    StringRoutine = NtdllpAllocateStringRoutine(FullPathName_Ustr);
    if ( !StringRoutine )
      return (unsigned int)-1073741801;
    v9 = *(_QWORD *)(a2 + 8);
    if ( a2 + 16 != v9 )
      NtdllpFreeStringRoutine(v9);
    *(_WORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 8) = StringRoutine;
    *(_WORD *)a2 = 0;
    *(_WORD *)(a2 + 2) = v6;
    *StringRoutine = 0;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(
                          a1,
                          *(unsigned __int16 *)(a2 + 2),
                          *(wchar_t **)(a2 + 8),
                          &v13,
                          &v10,
                          (__int64)&v11);
  }
  return (unsigned int)-1073741515;
}

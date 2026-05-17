/*
 * XREFs of LdrQueryProcessModuleInformationEx @ 0x1800172B8
 * Callers:
 *     LdrQueryProcessModuleInformation @ 0x180002C10 (LdrQueryProcessModuleInformation.c)
 *     RtlQueryProcessModuleInformation @ 0x180016FC4 (RtlQueryProcessModuleInformation.c)
 * Callees:
 *     LdrQueryNextListEntry @ 0x1800175C0 (LdrQueryNextListEntry.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x180017650 (LdrQueryModuleInfoFromLdrEntry.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformationEx(
        _QWORD *a1,
        char a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int *a5)
{
  _QWORD *v7; // r12
  unsigned int v8; // r14d
  unsigned int v9; // ebx
  unsigned __int64 v10; // rdi
  unsigned int *v11; // rcx
  int v12; // esi
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // eax
  int ModuleInfoFromLdrEntry; // eax
  unsigned int v18; // ecx
  int v19; // eax
  _DWORD *v21; // [rsp+38h] [rbp-90h]
  __int64 v22; // [rsp+40h] [rbp-88h] BYREF
  BOOL v23; // [rsp+48h] [rbp-80h]
  __int64 v24; // [rsp+50h] [rbp-78h]
  __int64 v25; // [rsp+58h] [rbp-70h]
  unsigned __int64 v26; // [rsp+60h] [rbp-68h]
  int v27; // [rsp+68h] [rbp-60h]
  _QWORD v28[11]; // [rsp+70h] [rbp-58h] BYREF
  int v29; // [rsp+D0h] [rbp+8h]

  v7 = a1;
  v8 = 8;
  v28[0] = 0LL;
  v28[1] = &LdrpProtectedCopyMemory;
  v28[2] = LdrpQueryInformationCurrentProcess;
  if ( a4 >= 8 )
  {
    *a3 = 0;
    v21 = a3 + 2;
    v9 = 0;
  }
  else
  {
    v9 = -1073741820;
    v21 = 0LL;
  }
  if ( !a1 || (a2 & 2) != 0 )
    v7 = v28;
  v10 = 0LL;
  v11 = a5;
  while ( 1 )
  {
    v26 = v10;
    if ( v10 >= (unsigned __int64)(a2 & 1) + 1 )
      return v9;
    v29 = 10240;
    v12 = 1;
    if ( v11 )
      *v11 = v8;
    if ( (a2 & 2) != 0 )
      _guard_dispatch_icall_fptr();
    v13 = _guard_dispatch_icall_fptr();
    if ( v13 < 0 )
      goto LABEL_31;
    if ( !v24 )
      goto LABEL_34;
    v13 = _guard_dispatch_icall_fptr();
    if ( v13 < 0 )
    {
LABEL_31:
      v9 = v13;
    }
    else
    {
      while ( 1 )
      {
        v14 = v22;
        if ( v22 == v24 )
          break;
        v15 = v29;
        if ( !v29 )
        {
          v9 = -1073741271;
          break;
        }
        --v29;
        v27 = v15 - 1;
        v8 += 296 * v12;
        v12 = 1;
        v23 = 1;
        v16 = a4;
        if ( a4 < v8 )
        {
          v9 = -1073741820;
        }
        else
        {
          if ( (char *)off_180113C70[5 * v10 + 2] == (char *)LdrQueryModuleInfoFromLdrEntry )
            ModuleInfoFromLdrEntry = LdrQueryModuleInfoFromLdrEntry((_DWORD)v7, (_DWORD)v21, v22, v25, a2);
          else
            ModuleInfoFromLdrEntry = _guard_dispatch_icall_fptr();
          v18 = ModuleInfoFromLdrEntry;
          if ( ModuleInfoFromLdrEntry < 0 )
            goto LABEL_32;
          v23 = *((_QWORD *)v21 + 2) != 0LL;
          v12 = v23;
          v21 += 74 * v23;
          v28[3] = v21;
          v14 = v22;
          v16 = a4;
        }
        if ( a3 && v16 >= 0x130 )
          *a3 += v12;
        if ( (char *)off_180113C70[5 * v10 + 1] == (char *)LdrQueryNextListEntry )
          v19 = LdrQueryNextListEntry(v7, v14, &v22);
        else
          v19 = _guard_dispatch_icall_fptr();
        v18 = v19;
        if ( v19 < 0 )
        {
LABEL_32:
          v9 = v18;
          break;
        }
      }
    }
LABEL_34:
    if ( (a2 & 2) != 0 )
      _guard_dispatch_icall_fptr();
    v11 = a5;
    if ( a5 )
      *a5 = v8;
    ++v10;
  }
}

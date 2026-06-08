/*
 * XREFs of DeregisterKernelIdleDomains @ 0x1C0023A24
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0007940 (RegisterKernelIdleStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1C0008E0C (GetDevExtFromIndex.c)
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 *     UpdateKernelIdleDomains @ 0x1C0023C78 (UpdateKernelIdleDomains.c)
 */

__int64 __fastcall DeregisterKernelIdleDomains(__int64 a1)
{
  _DWORD *v2; // rax
  unsigned int v3; // ebx
  unsigned int v4; // edx
  _QWORD *v5; // r15
  __int64 v6; // rax
  unsigned int *v7; // rcx
  char v8; // dl
  _QWORD *v9; // r14
  _QWORD *v10; // r8
  unsigned __int64 v11; // r10
  unsigned int *v12; // r9
  _QWORD *i; // rax
  unsigned int *v14; // rcx
  bool v15; // bl
  int v16; // edi
  int v17; // ebx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  void **v21; // rax
  unsigned int *v22; // rax
  __int64 DevExtFromIndex; // rax
  int updated; // eax
  unsigned int v25; // edx
  __int64 v26; // rax
  unsigned int j; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v29[24]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v30[176]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v31[176]; // [rsp+F0h] [rbp-10h] BYREF

  KeInitializeAffinityEx(v30);
  v2 = *(_DWORD **)(a1 + 696);
  if ( v2 )
  {
    v4 = 0;
    j = 0;
    if ( *v2 )
    {
      do
      {
        v5 = (_QWORD *)(32LL * v4 + *(_QWORD *)(a1 + 696) + 8LL);
        v6 = v5[1];
        if ( v6 )
        {
          KeCopyAffinityEx(v31, v6 + 48);
          v7 = *(unsigned int **)(a1 + 696);
          v8 = 1;
          v9 = (_QWORD *)v5[1];
          v10 = v9 + 2;
          v11 = (unsigned __int64)&v7[8 * *v7 + 2];
          v12 = v7 + 2;
          for ( i = (_QWORD *)v9[2]; i != v10; i = (_QWORD *)*i )
          {
            v14 = (unsigned int *)(i - 2);
            if ( i - 2 != v5 && v14 >= v12 && (unsigned __int64)v14 < v11 )
              v8 = 0;
          }
          v15 = 0;
          if ( v8 )
          {
            v16 = *((_DWORD *)v9 + 8);
            v17 = *((_DWORD *)v9 + 11);
            KeRemoveProcessorAffinityEx(v9 + 6, *(unsigned int *)(a1 + 56), v10, v12);
            --*((_DWORD *)v9 + 8);
            v15 = v16 == v17;
          }
          v18 = v5[2];
          v19 = (_QWORD *)v5[3];
          if ( *(_QWORD **)(v18 + 8) != v5 + 2 || (_QWORD *)*v19 != v5 + 2 )
            __fastfail(3u);
          *v19 = v18;
          *(_QWORD *)(v18 + 8) = v19;
          if ( v19 == (_QWORD *)v18 )
          {
            v20 = (_QWORD *)*v9;
            v21 = (void **)v9[1];
            if ( *(_QWORD **)(*v9 + 8LL) != v9 || *v21 != v9 )
              __fastfail(3u);
            *v21 = v20;
            v20[1] = v21;
            ExFreePoolWithTag(v9, 0);
          }
          v5[1] = 0LL;
          if ( v15 )
            KeOrAffinityEx(v31, v30, v30);
          v4 = j;
        }
        v22 = *(unsigned int **)(a1 + 696);
        j = ++v4;
      }
      while ( v4 < *v22 );
    }
    v3 = 0;
    KeInitializeEnumerationContext(v29, v30);
    while ( !(unsigned int)KeEnumerateNextProcessor(&j, v29) )
    {
      DevExtFromIndex = GetDevExtFromIndex(j);
      updated = UpdateKernelIdleDomains(DevExtFromIndex);
      if ( updated < 0 )
        v3 = updated;
    }
    v25 = *(_DWORD *)(*(_QWORD *)(a1 + 680) + 56LL);
    v26 = 0LL;
    for ( j = 0; (unsigned int)v26 < v25; j = v26 )
    {
      *(_QWORD *)(88 * v26 + *(_QWORD *)(a1 + 680) + 136) = 0LL;
      v26 = j + 1;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 696), 0x72637250u);
    *(_QWORD *)(a1 + 696) = 0LL;
  }
  else
  {
    return 0;
  }
  return v3;
}

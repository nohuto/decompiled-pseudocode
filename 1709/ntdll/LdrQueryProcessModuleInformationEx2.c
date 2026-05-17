/*
 * XREFs of LdrQueryProcessModuleInformationEx2 @ 0x1800D11FC
 * Callers:
 *     RtlQueryProcessModuleInformation @ 0x180016FC4 (RtlQueryProcessModuleInformation.c)
 * Callees:
 *     LdrpReadMemory @ 0x1800175CC (LdrpReadMemory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformationEx2(
        __int64 *a1,
        __int64 a2,
        _WORD *a3,
        unsigned int a4,
        unsigned int *a5)
{
  _WORD *v5; // rdi
  __int64 v6; // rsi
  __int64 *v7; // r14
  unsigned int v8; // r13d
  unsigned int v9; // ebx
  unsigned __int64 v10; // r15
  unsigned int *v11; // rcx
  int v12; // r12d
  int Memory; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rsi
  int v17; // edx
  __int64 v18; // r9
  int v19; // ecx
  int v21; // [rsp+34h] [rbp-94h]
  __int64 v22; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-80h] BYREF
  int v24; // [rsp+4Ch] [rbp-7Ch]
  _QWORD v25[2]; // [rsp+50h] [rbp-78h] BYREF
  int v26; // [rsp+60h] [rbp-68h]
  __int64 v27; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v28[11]; // [rsp+70h] [rbp-58h] BYREF
  __int16 v29; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v30; // [rsp+D8h] [rbp+10h]
  unsigned int v31; // [rsp+E8h] [rbp+20h]

  v31 = a4;
  v30 = a2;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = 2;
  v28[0] = 0LL;
  v28[1] = LdrpProtectedCopyMemory;
  v28[2] = LdrpQueryInformationCurrentProcess;
  if ( a4 >= 2 )
  {
    *a3 = 0;
    v9 = 0;
  }
  else
  {
    v9 = -1073741820;
    v5 = 0LL;
  }
  if ( !a1 || (a2 & 2) != 0 )
    v7 = v28;
  v10 = 0LL;
  v11 = a5;
  while ( 1 )
  {
    v25[1] = v10;
    if ( v10 >= (unsigned __int64)(v6 & 1) + 1 )
      return v9;
    v21 = 10240;
    v12 = 1;
    if ( v11 )
      *v11 = v8;
    if ( (v6 & 2) != 0 )
      off_180113C70[5 * v10 + 3]();
    Memory = ((__int64 (__fastcall *)(__int64 *, _QWORD *, __int64 *))off_180113C70[5 * v10])(v7, v25, &v27);
    if ( Memory < 0 )
    {
LABEL_14:
      v9 = Memory;
      goto LABEL_37;
    }
    if ( v25[0] )
    {
      Memory = ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64 *))off_180113C70[5 * v10 + 1])(v7, v25[0], &v22);
      if ( Memory < 0 )
        goto LABEL_14;
      while ( v22 != v25[0] )
      {
        v14 = v21;
        if ( !v21 )
        {
          v9 = -1073741271;
          break;
        }
        --v21;
        v26 = v14 - 1;
        v8 += 320 * v12;
        v12 = 1;
        v24 = 1;
        if ( v31 >= v8 )
        {
          *v5 = 320;
          Memory = ((__int64 (__fastcall *)(__int64 *, _WORD *, __int64, __int64, __int64))off_180113C70[5 * v10 + 2])(
                     v7,
                     v5 + 4,
                     v22,
                     v27,
                     v6);
          if ( Memory < 0 )
            goto LABEL_14;
          v15 = *((_QWORD *)v5 + 3);
          if ( v15 )
          {
            Memory = LdrpReadMemory(v7, (int)v15 + 60, (int)&v23, 4LL);
            if ( Memory < 0 )
              goto LABEL_14;
            v16 = *((_QWORD *)v5 + 3) + v23;
            Memory = LdrpReadMemory(v7, (int)v16 + 8, (int)v5 + 308, 4LL);
            if ( Memory < 0 )
              goto LABEL_14;
            Memory = LdrpReadMemory(v7, (int)v16 + 88, (int)v5 + 304, 4LL);
            if ( Memory < 0 )
              goto LABEL_14;
            Memory = LdrpReadMemory(v7, (int)v16 + 24, (int)&v29, 2LL);
            if ( Memory < 0 )
              goto LABEL_14;
            if ( v29 == 267 )
            {
              v17 = v16 + 52;
              v18 = 4LL;
            }
            else
            {
              v17 = v16 + 48;
              v18 = 8LL;
            }
            v19 = LdrpReadMemory(v7, v17, (int)v5 + 312, v18);
            if ( v19 < 0 )
            {
              v9 = v19;
              break;
            }
            v5 += 160;
            v28[3] = v5;
            *v5 = 0;
            v6 = v30;
          }
          else
          {
            v12 = 0;
            v24 = 0;
          }
        }
        else
        {
          v9 = -1073741820;
        }
        Memory = ((__int64 (__fastcall *)(__int64 *, __int64, __int64 *))off_180113C70[5 * v10 + 1])(v7, v22, &v22);
        if ( Memory < 0 )
          goto LABEL_14;
      }
    }
LABEL_37:
    v6 = v30;
    if ( (v30 & 2) != 0 )
      off_180113C70[5 * v10 + 4]();
    v11 = a5;
    if ( a5 )
      *a5 = v8;
    ++v10;
  }
}

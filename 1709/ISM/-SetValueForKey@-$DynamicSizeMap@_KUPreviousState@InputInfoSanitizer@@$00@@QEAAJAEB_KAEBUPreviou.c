/*
 * XREFs of ?SetValueForKey@?$DynamicSizeMap@_KUPreviousState@InputInfoSanitizer@@$00@@QEAAJAEB_KAEBUPreviousState@InputInfoSanitizer@@@Z @ 0x1800A3958
 * Callers:
 *     ?OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z @ 0x1800A2CE8 (-OnInputReport@InputInfoSanitizer@@AEAAJPEAUInputInfo@@_N@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 */

__int64 __fastcall DynamicSizeMap<unsigned __int64,InputInfoSanitizer::PreviousState,1>::SetValueForKey(
        __int64 a1,
        _QWORD *a2,
        _OWORD *a3)
{
  __int64 v3; // r14
  unsigned int v4; // edi
  __int64 v6; // r11
  char v7; // r8
  _QWORD *v8; // r12
  char v10; // di
  int v11; // r9d
  unsigned int v12; // edx
  __int64 v13; // rcx
  char *v14; // r10
  unsigned int v15; // r15d
  __int64 v16; // rax
  __int64 v17; // rdx
  char *v18; // rcx
  __int128 v19; // xmm1
  char *v20; // rdi
  unsigned int v21; // r13d
  unsigned __int64 v22; // r15
  _DWORD *v23; // rax
  __int64 v24; // rcx
  void *v25; // r14
  _DWORD *v26; // rdi
  _DWORD *v27; // r12
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  _OWORD *v31; // rcx
  __int64 v32; // rdx
  __int128 v33; // xmm1
  unsigned int v35; // [rsp+80h] [rbp+8h]
  char *v37; // [rsp+98h] [rbp+20h]

  v3 = *a2;
  v4 = 0;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 0;
  v8 = a2;
  if ( *a2 == v6 )
  {
    v10 = 87;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_5;
    v11 = 153;
LABEL_4:
    McTemplateU0qqq(a1, &MinInput_Warning_CheckResult, 0, v11, v10);
LABEL_5:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v12 = *(_DWORD *)(a1 + 8);
  v13 = 0LL;
  if ( !v12 )
    goto LABEL_16;
  v14 = *(char **)a1;
  v15 = 0;
  do
  {
    v16 = 536LL * (unsigned int)v13;
    if ( *(_QWORD *)&v14[v16] == v3 )
    {
      v17 = 4LL;
      v18 = &v14[536 * (unsigned int)v13 + 8];
      do
      {
        *(_OWORD *)v18 = *a3;
        *((_OWORD *)v18 + 1) = a3[1];
        *((_OWORD *)v18 + 2) = a3[2];
        *((_OWORD *)v18 + 3) = a3[3];
        *((_OWORD *)v18 + 4) = a3[4];
        *((_OWORD *)v18 + 5) = a3[5];
        *((_OWORD *)v18 + 6) = a3[6];
        v18 += 128;
        v19 = a3[7];
        a3 += 8;
        *((_OWORD *)v18 - 1) = v19;
        --v17;
      }
      while ( v17 );
      *(_OWORD *)v18 = *a3;
      return v4;
    }
    if ( !v7 && *(_QWORD *)&v14[v16] == v6 )
    {
      v15 = v13;
      v7 = 1;
    }
    v13 = (unsigned int)(v13 + 1);
  }
  while ( (unsigned int)v13 < v12 );
  if ( v7 )
  {
LABEL_38:
    v30 = 536LL * v15;
    *(_QWORD *)(v30 + *(_QWORD *)a1) = *v8;
    v31 = (_OWORD *)(v30 + *(_QWORD *)a1 + 8LL);
    v32 = 4LL;
    do
    {
      *v31 = *a3;
      v31[1] = a3[1];
      v31[2] = a3[2];
      v31[3] = a3[3];
      v31[4] = a3[4];
      v31[5] = a3[5];
      v31[6] = a3[6];
      v31 += 8;
      v33 = a3[7];
      a3 += 8;
      *(v31 - 1) = v33;
      --v32;
    }
    while ( v32 );
    *v31 = *a3;
    ++*(_DWORD *)(a1 + 12);
    return 0;
  }
LABEL_16:
  if ( *(_DWORD *)(a1 + 12) == v12 )
  {
    v20 = *(char **)a1;
    v21 = 2 * v12;
    v35 = v12;
    v22 = 2 * v12;
    v37 = *(char **)a1;
    v23 = operator new[](saturated_mul(v22, 0x218uLL));
    v25 = v23;
    if ( v23 )
    {
      if ( v21 )
      {
        v26 = v23 + 132;
        do
        {
          *v26 = -1;
          v27 = v26 - 130;
          --v22;
          memset(v26 - 130, 0, 0x208uLL);
          v24 = 10LL;
          do
          {
            *v27 = *v26;
            v27 += 13;
            --v24;
          }
          while ( v24 );
          v26[1] = 0;
          v26 += 134;
        }
        while ( v22 );
        v20 = v37;
        v8 = a2;
      }
    }
    else
    {
      v25 = 0LL;
    }
    *(_QWORD *)a1 = v25;
    if ( !v25 )
    {
      v10 = 14;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_5;
      McTemplateU0qqq(v24, &MinInput_Warning_CheckResult, 0, 387, 14);
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_5;
      v11 = 185;
      goto LABEL_4;
    }
    memcpy_0(v25, v20, 536LL * *(unsigned int *)(a1 + 8));
    if ( *(_DWORD *)(a1 + 8) < v21 )
    {
      v28 = 536LL * *(unsigned int *)(a1 + 8);
      v29 = v21 - *(_DWORD *)(a1 + 8);
      do
      {
        *(_QWORD *)(v28 + *(_QWORD *)a1) = *(_QWORD *)(a1 + 16);
        v28 += 536LL;
        --v29;
      }
      while ( v29 );
    }
    *(_DWORD *)(a1 + 8) = v21;
    operator delete(v20);
    v15 = v35;
    goto LABEL_38;
  }
  v4 = -2147467259;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 180, 5);
  return v4;
}

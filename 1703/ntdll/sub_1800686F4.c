/*
 * XREFs of sub_1800686F4 @ 0x1800686F4
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180067770 (RtlQueryProcessDebugInformation.c)
 *     RtlDestroyQueryDebugBuffer @ 0x1800686C0 (RtlDestroyQueryDebugBuffer.c)
 *     RtlSetProcessDebugInformation @ 0x1800D9A60 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenProcess @ 0x1800A57C0 (ZwOpenProcess.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 */

__int64 __fastcall sub_1800686F4(_QWORD *a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // rax
  char *v5; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rdi
  __int128 v13; // xmm0
  _OWORD *v14; // rbx
  __int64 result; // rax
  int v16; // eax
  unsigned int v17; // edi
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // [rsp+58h] [rbp-39h] BYREF
  __int64 v21; // [rsp+60h] [rbp-31h] BYREF
  __int64 v22; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v23[2]; // [rsp+70h] [rbp-21h] BYREF
  _QWORD v24[2]; // [rsp+80h] [rbp-11h] BYREF
  int v25; // [rsp+90h] [rbp-1h] BYREF
  __int64 v26; // [rsp+98h] [rbp+7h]
  __int64 v27; // [rsp+A0h] [rbp+Fh]
  int v28; // [rsp+A8h] [rbp+17h]
  __int128 v29; // [rsp+B0h] [rbp+1Fh]
  __int64 v30; // [rsp+F8h] [rbp+67h] BYREF

  v4 = a1[6];
  v5 = (char *)a1 + a1[11];
  v25 = 48;
  v26 = 0LL;
  v28 = 0;
  v27 = 0LL;
  v29 = 0LL;
  if ( v4 )
  {
    v23[0] = v4;
    v23[1] = 0LL;
    result = ZwOpenProcess(&v20, 0x1FFFFFLL, &v25, v23);
    if ( (int)result < 0 )
      return result;
    v10 = v20;
  }
  else
  {
    v10 = -1LL;
    v20 = -1LL;
  }
  if ( a2 )
  {
    v24[0] = a2;
    v24[1] = 0LL;
    v16 = ZwOpenProcess(&v30, 0x1FFFFFLL, &v25, v24);
    v10 = v20;
    v17 = v16;
    if ( v16 < 0 )
    {
      if ( v20 != -1 )
        ZwClose(v20);
      return v17;
    }
    v11 = v30;
  }
  else
  {
    v11 = 0LL;
    v30 = 0LL;
  }
  v12 = a1 + 2;
  if ( v10 == -1 )
  {
    *v12 = a1[11] + a1[1];
  }
  else
  {
    if ( *v12 )
    {
      ZwUnmapViewOfSection(v10, *v12);
      v10 = v20;
      *v12 = 0LL;
    }
    ZwClose(v10);
    v11 = v30;
  }
  v21 = a1[11];
  v22 = v21;
  if ( v11 )
  {
    v18 = ZwMapViewOfSection(*a1, v11, a1 + 2, 0LL, 0LL, &v22, &v21, 2, 0, 4);
    if ( v18 == -1073741800 )
    {
      v19 = v30;
      *v12 = 0LL;
      v18 = ZwMapViewOfSection(*a1, v19, a1 + 2, 0LL, 0LL, &v22, &v21, 2, 0, 4);
    }
    if ( v18 < 0 )
    {
      ZwClose(v30);
      return (unsigned int)v18;
    }
    if ( a4 )
      *a4 = v30;
    else
      ZwClose(v30);
  }
  a1[6] = a2;
  a1[3] = (char *)a1 - *v12;
  if ( a3 == 1 )
  {
    *(_DWORD *)v5 = 0;
    *((_DWORD *)v5 + 1) = *(_DWORD *)v12;
    *((_DWORD *)v5 + 2) = *(_DWORD *)v12;
    *((_DWORD *)v5 + 3) = *((_DWORD *)a1 + 6);
    *((_DWORD *)v5 + 4) = *((_DWORD *)a1 + 8);
    *((_DWORD *)v5 + 5) = *((_DWORD *)a1 + 10);
    *((_DWORD *)v5 + 6) = *((_DWORD *)a1 + 12);
    *((_DWORD *)v5 + 7) = *((_DWORD *)a1 + 14);
    *((_DWORD *)v5 + 8) = *((_DWORD *)a1 + 16);
    *((_DWORD *)v5 + 9) = *((_DWORD *)a1 + 18);
    *((_DWORD *)v5 + 10) = *((_DWORD *)a1 + 20);
    *((_DWORD *)v5 + 11) = *((_DWORD *)a1 + 22);
    *((_DWORD *)v5 + 20) = *((_DWORD *)a1 + 40);
  }
  else
  {
    *(_OWORD *)v5 = *(_OWORD *)a1;
    *((_OWORD *)v5 + 1) = *((_OWORD *)a1 + 1);
    *((_OWORD *)v5 + 2) = *((_OWORD *)a1 + 2);
    *((_OWORD *)v5 + 3) = *((_OWORD *)a1 + 3);
    *((_OWORD *)v5 + 4) = *((_OWORD *)a1 + 4);
    *((_OWORD *)v5 + 5) = *((_OWORD *)a1 + 5);
    *((_OWORD *)v5 + 6) = *((_OWORD *)a1 + 6);
    v13 = *((_OWORD *)a1 + 7);
    v14 = a1 + 16;
    *((_OWORD *)v5 + 7) = v13;
    *((_OWORD *)v5 + 8) = *v14;
    *((_OWORD *)v5 + 9) = v14[1];
    *((_OWORD *)v5 + 10) = v14[2];
    *((_OWORD *)v5 + 11) = v14[3];
    *((_OWORD *)v5 + 12) = v14[4];
    *((_QWORD *)v5 + 1) = *((_QWORD *)v5 + 2);
    *(_QWORD *)v5 = 0LL;
  }
  return 0LL;
}

/*
 * XREFs of NtGdiPolyTextOutW @ 0x1C00E2CE0
 * Callers:
 *     <none>
 * Callees:
 *     GrePolyTextOutW @ 0x1C00E3088 (GrePolyTextOutW.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtGdiPolyTextOutW(HDC a1, char *a2, unsigned int a3)
{
  unsigned int v5; // edi
  unsigned int v6; // r14d
  char *v7; // r15
  ULONG64 v8; // rdx
  unsigned int i; // ecx
  __int64 v10; // r8
  unsigned __int64 v11; // r10
  unsigned int v12; // eax
  int v13; // edx
  unsigned int v14; // eax
  char *v15; // r12
  char *v16; // r10
  unsigned int j; // ebx
  __int64 v18; // rax
  unsigned int v19; // ecx
  char *v20; // r9
  __int64 v21; // rdx
  char *v22; // r14
  unsigned int k; // ebx
  __int64 v24; // rax
  unsigned int v25; // ecx
  char *v26; // rdx
  __int64 v27; // rax
  char *v28; // r14
  __int64 v30; // [rsp+38h] [rbp-60h]
  __int64 v31; // [rsp+38h] [rbp-60h]
  char *v32; // [rsp+48h] [rbp-50h]

  v5 = 1;
  v6 = 56 * a3;
  v7 = 0LL;
  if ( a3 > 0xB2924 )
  {
    v5 = 0;
  }
  else
  {
    if ( 56LL * a3 )
    {
      if ( ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = (ULONG64)&a2[56 * a3];
      if ( v8 > MmUserProbeAddress || v8 < (unsigned __int64)a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    for ( i = 0; i < a3; ++i )
    {
      v10 = 56LL * i;
      v11 = *(int *)&a2[v10 + 8];
      v12 = v6;
      v6 += 2 * v11;
      if ( v11 > 0x1388000 || v6 < v12 )
        goto LABEL_24;
      if ( *(_QWORD *)&a2[v10 + 48] )
      {
        v13 = 4 * v11;
        if ( (*(_DWORD *)&a2[v10 + 24] & 0x2000) != 0 )
        {
          if ( (unsigned int)(2 * v11) > 0x9C4000 )
            v5 = 0;
          v13 = 8 * v11;
        }
        else if ( v11 > 0x9C4000 )
        {
          v5 = 0;
        }
        v14 = v6;
        v6 += v13;
        if ( !v5 || v6 < v14 )
          goto LABEL_24;
      }
      if ( (_DWORD)v11 && !*(_QWORD *)&a2[v10 + 16] )
      {
LABEL_24:
        v5 = 0;
        break;
      }
    }
  }
  if ( v5 && v6 )
  {
    if ( v6 <= 0x2710000 )
      v7 = (char *)AllocFreeTmpBuffer(v6);
    if ( v7 )
    {
      memmove(v7, a2, 56LL * a3);
      v15 = &v7[56 * a3];
      v16 = &v7[v6];
      v32 = v16;
      for ( j = 0; j < a3; ++j )
      {
        v18 = 56LL * j;
        v30 = v18;
        v19 = *(_DWORD *)&v7[v18 + 8];
        if ( v19 )
        {
          v20 = *(char **)&v7[v18 + 48];
          if ( v20 )
          {
            v21 = 4 * v19;
            if ( (*(_DWORD *)&v7[v18 + 24] & 0x2000) != 0 )
            {
              if ( v19 > 0x4E2000 )
                v5 = 0;
              v21 = 8 * v19;
            }
            else if ( v19 > 0x9C4000 )
            {
              v5 = 0;
            }
            v22 = &v15[v21];
            if ( !v5 || v22 < v15 || v22 > v16 )
            {
LABEL_60:
              v5 = 0;
              goto LABEL_61;
            }
            if ( &v20[v21] < v20 || (unsigned __int64)&v20[v21] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v15, v20, (unsigned int)v21);
            *(_QWORD *)&v7[v30 + 48] = v15;
            v15 = v22;
            v16 = v32;
          }
        }
      }
      for ( k = 0; k < a3; ++k )
      {
        v24 = 56LL * k;
        v31 = v24;
        v25 = *(_DWORD *)&v7[v24 + 8];
        if ( v25 )
        {
          v26 = *(char **)&v7[v24 + 16];
          if ( !v26 )
            goto LABEL_60;
          v27 = 2 * v25;
          v28 = &v15[v27];
          if ( v25 > 0x1388000 || v28 < v15 || v28 > v16 )
            goto LABEL_60;
          if ( &v26[v27] < v26 || (unsigned __int64)&v26[v27] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v15, v26, 2 * v25);
          *(_QWORD *)&v7[v31 + 16] = v15;
          v15 = v28;
          v16 = v32;
        }
      }
LABEL_61:
      if ( v5 )
        v5 = GrePolyTextOutW(a1);
      FreeTmpBuffer(v7);
    }
    else
    {
      return 0;
    }
  }
  return v5;
}

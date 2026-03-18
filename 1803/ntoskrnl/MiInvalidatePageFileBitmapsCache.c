/*
 * XREFs of MiInvalidatePageFileBitmapsCache @ 0x14009D014
 * Callers:
 *     MiFindFreePageFileSpace @ 0x14009CC84 (MiFindFreePageFileSpace.c)
 *     MiGatherPagefilePages @ 0x1400D5DC8 (MiGatherPagefilePages.c)
 *     MiAttemptPageFileReductionApc @ 0x14025EDD0 (MiAttemptPageFileReductionApc.c)
 * Callees:
 *     MiBitmapsCachedEntryLengthChanged @ 0x1400DA49C (MiBitmapsCachedEntryLengthChanged.c)
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1400E9770 (RtlRbRemoveNode.c)
 */

__int64 __fastcall MiInvalidatePageFileBitmapsCache(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  char v5; // bl
  __int64 *v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdi
  int v11; // r8d
  unsigned int v12; // ecx
  int v13; // r8d
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  _QWORD *v19; // r9
  __int64 *v20; // r14
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  int v25; // ecx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  unsigned int v31; // eax
  __int64 v32; // rdx
  int v33; // ecx
  __int64 v34; // rsi

  v5 = 0;
  if ( a4 )
  {
LABEL_18:
    v13 = *(_DWORD *)(a4 + 48);
    if ( v13 == a2 || (v14 = a2 + a3, v15 = v13 + *(_DWORD *)(a4 + 52), a2 + a3 == v15) )
    {
      v33 = *(_DWORD *)(a4 + 52) - a3;
      *(_DWORD *)(a4 + 52) = v33;
      if ( v13 == a2 )
        *(_DWORD *)(a4 + 48) = v13 + a3;
      v32 = a4;
      if ( !v33 )
      {
        RtlRbRemoveNode(a1 + 144, a4);
        RtlRbRemoveNode(a1 + 160, a4 + 24);
        v34 = a1 + 176;
        result = *(_QWORD *)(v34 + 8);
        if ( *(_QWORD *)result != v34 )
          __fastfail(3u);
        *(_QWORD *)a4 = v34;
        *(_QWORD *)(a4 + 8) = result;
        *(_QWORD *)result = a4;
        *(_QWORD *)(v34 + 8) = a4;
        return result;
      }
    }
    else
    {
      v16 = v15 - a2;
      v17 = a2 - v13;
      v18 = v16 - a3;
      v19 = (_QWORD *)(a1 + 176);
      v20 = *(__int64 **)(a1 + 176);
      if ( v20 != (__int64 *)(a1 + 176) )
      {
        if ( (_QWORD *)v20[1] != v19 || (v21 = *v20, *(__int64 **)(*v20 + 8) != v20) )
          __fastfail(3u);
        *v19 = v21;
        *(_QWORD *)(v21 + 8) = v19;
        *((_DWORD *)v20 + 13) = v18;
        *((_DWORD *)v20 + 12) = v14;
        *(_DWORD *)(a4 + 52) = v17;
        MiBitmapsCachedEntryLengthChanged(a1, a4, 0LL);
        v23 = *(_QWORD *)(a1 + 152);
        v24 = *(_QWORD *)(a1 + 144);
        if ( (v23 & 1) != 0 )
        {
          if ( v24 )
            v24 ^= a1 + 144;
          else
            v24 = 0LL;
        }
        LOBYTE(v22) = 0;
        v25 = v23 & 1;
        if ( v24 )
        {
          v22 = *((unsigned int *)v20 + 13);
          while ( 1 )
          {
            if ( (unsigned __int64)v20[6] < *(_QWORD *)(v24 + 48) )
            {
              v26 = *(_QWORD *)v24;
              if ( v25 )
              {
                if ( !v26 )
                  goto LABEL_40;
                v26 ^= v24;
              }
              if ( !v26 )
              {
LABEL_40:
                LOBYTE(v22) = 0;
                break;
              }
            }
            else
            {
              v26 = *(_QWORD *)(v24 + 8);
              if ( v25 )
              {
                if ( !v26 )
                  goto LABEL_34;
                v26 ^= v24;
              }
              if ( !v26 )
              {
LABEL_34:
                LOBYTE(v22) = 1;
                break;
              }
            }
            v24 = v26;
          }
        }
        RtlRbInsertNodeEx(a1 + 144, v24, v22, v20);
        v27 = a1 + 160;
        v28 = *(_QWORD *)(a1 + 160);
        if ( (*(_QWORD *)(a1 + 168) & 1) != 0 )
        {
          if ( v28 )
            v28 ^= v27;
          else
            v28 = 0LL;
        }
        v29 = *(_QWORD *)(a1 + 168) & 1LL;
        if ( v28 )
        {
          while ( 1 )
          {
            if ( *((_DWORD *)v20 + 12) < *(_DWORD *)(v28 + 24) )
            {
              v30 = *(_QWORD *)v28;
              if ( (_DWORD)v29 )
              {
                if ( !v30 )
                  break;
                v30 ^= v28;
              }
              if ( !v30 )
                break;
            }
            else
            {
              v30 = *(_QWORD *)(v28 + 8);
              if ( (_DWORD)v29 )
              {
                if ( !v30 )
                  goto LABEL_51;
                v30 ^= v28;
              }
              if ( !v30 )
              {
LABEL_51:
                v5 = 1;
                break;
              }
            }
            v28 = v30;
          }
        }
        LOBYTE(v29) = v5;
        return RtlRbInsertNodeEx(v27, v28, v29, v20 + 3);
      }
      if ( v17 <= v18 )
      {
        *(_DWORD *)(a4 + 48) = v14;
        *(_DWORD *)(a4 + 52) = v18;
        v31 = *(_DWORD *)(a1 + 140);
        if ( v31 <= v17 )
          v31 = v17;
      }
      else
      {
        *(_DWORD *)(a4 + 52) = v17;
        v31 = *(_DWORD *)(a1 + 140);
        if ( v31 <= v18 )
          v31 = v18;
      }
      *(_DWORD *)(a1 + 140) = v31;
      v32 = a4;
    }
    return MiBitmapsCachedEntryLengthChanged(a1, v32, 0LL);
  }
  v8 = (__int64 *)(a1 + 160);
  result = v8[1];
  v10 = *v8;
  if ( (result & 1) != 0 )
  {
    if ( v10 )
      v10 ^= (unsigned __int64)v8;
    else
      v10 = 0LL;
  }
  v11 = result & 1;
  while ( v10 )
  {
    v12 = *(_DWORD *)(v10 + 24);
    if ( a2 + a3 <= v12 )
    {
      result = *(_QWORD *)v10;
    }
    else
    {
      if ( a2 < *(_DWORD *)(v10 + 28) + v12 )
      {
        a4 = v10 - 24;
        goto LABEL_18;
      }
      result = *(_QWORD *)(v10 + 8);
    }
    if ( v11 && result )
      v10 ^= result;
    else
      v10 = result;
  }
  return result;
}

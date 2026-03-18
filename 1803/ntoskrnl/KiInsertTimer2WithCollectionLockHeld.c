/*
 * XREFs of KiInsertTimer2WithCollectionLockHeld @ 0x1400E7BC0
 * Callers:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     KiInsertTimer2 @ 0x1400BBA54 (KiInsertTimer2.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400E84C0 (RtlRbInsertNodeEx.c)
 *     KiRemoveTimer2 @ 0x1400E9160 (KiRemoveTimer2.c)
 */

__int64 __fastcall KiInsertTimer2WithCollectionLockHeld(__int64 a1, char a2, unsigned __int64 a3, _BYTE *a4)
{
  char v4; // r10
  _BYTE *v5; // rbp
  unsigned __int8 v7; // r12
  _BYTE *v8; // r13
  int v9; // r15d
  int v10; // esi
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  int v15; // ecx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  char v19; // cl
  __int64 v20; // rdi
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  int v23; // ecx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  signed __int32 v29[8]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *(_BYTE *)(a1 + 130);
  v5 = a4;
  v7 = 1;
  v8 = (_BYTE *)a3;
  v9 = 0;
  *(_BYTE *)a3 = 0;
  v10 = 0;
  *a4 = 0;
  if ( v4 == 20 || (v4 & 0x20) != 0 && *(_QWORD *)(a1 + 72) == *(_QWORD *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 130) = v4 | 0x10;
  }
  else
  {
    v11 = a1 + 24;
    *(_BYTE *)(a1 + 130) = v4 & 0xEF;
    v12 = *((_QWORD *)&KiTimer2Collections + 3 * (v4 & 3) + 1);
    v13 = *((_QWORD *)&KiTimer2Collections + 3 * (v4 & 3));
    v14 = (unsigned __int64)&KiTimer2Collections + 24 * (v4 & 3);
    if ( (v12 & 1) != 0 )
    {
      if ( v13 )
        v13 ^= v14;
      else
        v13 = 0LL;
    }
    LOBYTE(a3) = 0;
    v15 = v12 & 1;
    if ( v13 )
    {
      a3 = *(_QWORD *)(a1 + 72);
      while ( 1 )
      {
        if ( a3 < *(_QWORD *)(v13 + 48) )
        {
          v16 = *(_QWORD *)v13;
          if ( v15 )
          {
            if ( !v16 )
              goto LABEL_21;
            v16 ^= v13;
          }
          if ( !v16 )
          {
LABEL_21:
            LOBYTE(a3) = 0;
            break;
          }
        }
        else
        {
          v16 = *(_QWORD *)(v13 + 8);
          if ( v15 )
          {
            if ( !v16 )
              goto LABEL_15;
            v16 ^= v13;
          }
          if ( !v16 )
          {
LABEL_15:
            a3 = 1LL;
            break;
          }
        }
        v13 = v16;
      }
    }
    RtlRbInsertNodeEx(v14, v13, a3, a1 + 24);
    v17 = *(_QWORD *)(v14 + 8);
    if ( (v17 & 1) != 0 )
    {
      if ( v17 == 1 )
        v18 = 0LL;
      else
        v18 = v17 ^ (v14 | 1);
    }
    else
    {
      v18 = *(_QWORD *)(v14 + 8);
    }
    if ( v18 == v11 )
    {
      *(_QWORD *)(v14 + 16) = *(_QWORD *)(a1 + 72);
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
  }
  v19 = *(_BYTE *)(a1 + 131);
  if ( *(_QWORD *)(a1 + 80) == -1LL )
  {
    *(_BYTE *)(a1 + 131) = v19 | 0x10;
  }
  else
  {
    *(_BYTE *)(a1 + 131) = v19 & 0xEF;
    v20 = 0x140000000LL + 24LL * (v19 & 3) + 3884192;
    v21 = *(_QWORD *)(0x140000008LL + 24LL * (v19 & 3) + 3884192);
    v22 = *(_QWORD *)v20;
    if ( (v21 & 1) != 0 )
    {
      if ( v22 )
        v22 ^= v20;
      else
        v22 = 0LL;
    }
    LOBYTE(a3) = 0;
    v23 = v21 & 1;
    if ( v22 )
    {
      a3 = *(_QWORD *)(a1 + 80);
      while ( 1 )
      {
        if ( a3 < *(_QWORD *)(v22 + 32) )
        {
          v24 = *(_QWORD *)v22;
          if ( v23 )
          {
            if ( !v24 )
              goto LABEL_49;
            v24 ^= v22;
          }
          if ( !v24 )
          {
LABEL_49:
            LOBYTE(a3) = 0;
            break;
          }
        }
        else
        {
          v24 = *(_QWORD *)(v22 + 8);
          if ( v23 )
          {
            if ( !v24 )
              goto LABEL_43;
            v24 ^= v22;
          }
          if ( !v24 )
          {
LABEL_43:
            a3 = 1LL;
            break;
          }
        }
        v22 = v24;
      }
    }
    RtlRbInsertNodeEx(v20, v22, a3, a1 + 48);
    v25 = *(_QWORD *)(v20 + 8);
    if ( (v25 & 1) != 0 )
    {
      if ( v25 == 1 )
        v26 = 0LL;
      else
        v26 = v25 ^ (v20 | 1);
    }
    else
    {
      v26 = *(_QWORD *)(v20 + 8);
    }
    if ( v26 == a1 + 48 )
    {
      v9 = 1;
      *(_QWORD *)(v20 + 16) = *(_QWORD *)(a1 + 80);
    }
    v5 = a4;
    v10 |= v9;
  }
  if ( v10 )
  {
    if ( (unsigned __int64)KiNextTimer2DueTime > *(_QWORD *)(a1 + 72) )
    {
      KiNextTimer2DueTime = *(_QWORD *)(a1 + 72);
      _InterlockedOr(v29, 0);
    }
    if ( *(_QWORD *)(a1 + 72) <= MEMORY[0xFFFFF78000000008] )
    {
      *v8 = 1;
      if ( !a2 )
      {
        KiRemoveTimer2(a1);
        v7 = 0;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 129) & 4) != 0 && _InterlockedIncrement(&KiHrTimerActiveCount) == 1 )
  {
    v27 = *(_QWORD *)(KiProcessorBlock[KiClockTimerOwner] + 25016);
    if ( v27 && (KiVelocityFlags & 0x40) != 0 && *(_BYTE *)(v27 + 27) != 1 )
    {
      *(_BYTE *)(v27 + 27) = 1;
      *v5 = 1;
      return v7;
    }
    *v5 = 0;
  }
  return v7;
}

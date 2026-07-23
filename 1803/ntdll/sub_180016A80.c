/*
 * XREFs of sub_180016A80 @ 0x180016A80
 * Callers:
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_18005F840 @ 0x18005F840 (sub_18005F840.c)
 *     sub_180104BE8 @ 0x180104BE8 (sub_180104BE8.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180018770 @ 0x180018770 (sub_180018770.c)
 *     sub_18001BA50 @ 0x18001BA50 (sub_18001BA50.c)
 *     sub_1800205E0 @ 0x1800205E0 (sub_1800205E0.c)
 *     sub_180023AAC @ 0x180023AAC (sub_180023AAC.c)
 *     sub_18006316C @ 0x18006316C (sub_18006316C.c)
 *     sub_1800631EC @ 0x1800631EC (sub_1800631EC.c)
 *     sub_180063A64 @ 0x180063A64 (sub_180063A64.c)
 *     sub_180063ACC @ 0x180063ACC (sub_180063ACC.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_1800EBFF8 @ 0x1800EBFF8 (sub_1800EBFF8.c)
 *     sub_1800FE3BC @ 0x1800FE3BC (sub_1800FE3BC.c)
 *     sub_180105970 @ 0x180105970 (sub_180105970.c)
 */

__int64 __fastcall sub_180016A80(_DWORD *a1, unsigned __int64 a2, int a3, _QWORD *a4, _WORD *a5)
{
  int v6; // r15d
  int v9; // ecx
  int v10; // edx
  int v11; // r8d
  _WORD *v12; // r14
  unsigned int v13; // ebp
  __int64 v14; // r12
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned int v20; // r14d
  unsigned __int64 v21; // rdx
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v23; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  signed __int64 v27; // rax
  signed __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 UserModeGlobalLogger; // rcx
  __int16 v32; // ax
  char v33; // al
  __int16 v34; // [rsp+62h] [rbp+Ah]
  __int64 v35; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0;
  v9 = a3 | a1[5] & 0x11000001;
  v10 = 0;
  v11 = a1[16];
  if ( v11 )
    LOBYTE(v10) = v11 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
  v12 = a5;
  v13 = v9 | 1;
  v14 = 0LL;
  if ( !v10 )
    v13 = v9;
  if ( a5 )
  {
    v14 = sub_180063A64(a1, a2, v13, a4);
    if ( (unsigned __int64)(v14 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      v32 = 0;
    else
      v32 = *(_WORD *)v14;
    *v12 = v32;
  }
  else if ( a4 )
  {
    *a4 = sub_180063ACC(a1, a2, v13, 0LL);
  }
  if ( (v13 & 0x1000000) == 0 )
  {
    if ( a1[14] )
    {
      if ( (v14 || (v14 = sub_180063A64(a1, a2, v13, a4)) != 0) && v14 != -1 )
      {
        v33 = *(_BYTE *)(v14 + 2);
        if ( (v33 & 0xF) != 0 && (int)sub_1800EBFF8(v33 & 0xF, (_DWORD)a1, a2, 3, v14 + 16) < 0 )
          return 0LL;
      }
    }
  }
  if ( (a1[5] & 0x10000000) == 0 || sub_18001BA50(a1, a2, v13) != -1 )
  {
    if ( (_WORD)a2 )
    {
      v15 = 0;
    }
    else
    {
      v30 = sub_18006316C(&unk_18015D838, 2 * ((a2 - qword_18015D878) >> 20));
      if ( !v30 || (v15 = v30 - 1, v15 == 2) )
      {
        v20 = sub_1800631EC(a1, a2, v13) != 0;
        if ( RtlGetCurrentServiceSessionId() )
          UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          UserModeGlobalLogger = 2147353472LL;
        if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 && v20 )
          sub_1800FE3BC(a1, a2, 3LL);
        return v20;
      }
    }
    v16 = 30LL * v15;
    v17 = (unsigned __int64)&a1[v16 + 28];
    if ( (dword_180159760 & 1) != 0 )
    {
      v19 = sub_180105970(&a1[v16 + 28], a2);
    }
    else
    {
      v18 = a2 & *(_QWORD *)v17;
      if ( (v17 ^ qword_18015A440 ^ v18 ^ *(_QWORD *)(v18 + 0x10)) == 0xA2E64EADA2E64EADuLL )
        v19 = v18 + 32 * ((unsigned __int64)(unsigned int)(a2 - v18) >> *(_BYTE *)(v17 + 8));
      else
        v19 = 0LL;
    }
    if ( !v19 || (*(_BYTE *)(v19 + 24) & 1) == 0 )
      goto LABEL_78;
    v20 = 1;
    if ( (*(_BYTE *)(v19 + 24) & 2) != 0 )
    {
      if ( (*(_BYTE *)(v19 + 24) & 0xCu) < 8 && (((1 << *(_BYTE *)(v17 + 8)) - 1) & a2) != 0 )
        goto LABEL_78;
    }
    else
    {
      v19 += -32LL * *(unsigned __int8 *)(v19 + 31);
      if ( (*(_BYTE *)(v19 + 24) & 1) == 0 || (*(_BYTE *)(v19 + 24) & 2) == 0 || (*(_BYTE *)(v19 + 24) & 0xCu) < 8 )
        goto LABEL_78;
    }
    if ( v19 )
    {
      v21 = (v19 & *(_QWORD *)v17) + ((v19 - (v19 & *(_QWORD *)v17)) >> 5 << *(_BYTE *)(v17 + 8));
      if ( a2 <= v21 )
      {
        sub_180023AAC(v17, v19, 0LL, v13);
        if ( RtlGetCurrentServiceSessionId() )
          v29 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          v29 = 2147353472LL;
        if ( *(_BYTE *)v29 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          sub_1800FE3BC(*(_QWORD *)(v17 + 112), a2, 3LL);
      }
      else
      {
        if ( (*(_BYTE *)(v19 + 24) & 0xC) == 8 )
        {
          v20 = sub_180018770(*(_QWORD *)(v17 + 80), v21, a2, v13);
        }
        else
        {
          v20 = sub_1800205E0(*(PRTL_SRWLOCK *)(v17 + 88), (__int64)&v35);
          if ( v20 )
          {
            v25 = *(_QWORD *)(v17 + 80);
            if ( (unsigned int)v35 <= *(_DWORD *)(v25 + 80) - 16 )
            {
              v26 = byte_1801190F0[(unsigned __int64)(unsigned int)(v35 + 15) >> 4];
              if ( (*(_QWORD *)(v25 + 8 * v26 + 224) & 1) != 0 )
              {
                do
                {
                  v34 = WORD1(*(_QWORD *)(v25 + 8 * v26 + 224));
                  v28 = *(_QWORD *)(v25 + 8 * v26 + 224);
                  a5 = (_WORD *)v28;
                  v27 = v28;
                  if ( (v28 & 1) == 0 )
                    break;
                  if ( WORD1(a5) > 1u )
                  {
                    WORD1(a5) = v34 - 1;
                    v28 = (signed __int64)a5;
                  }
                }
                while ( v27 != _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 8 * v26 + 224), v28, v27) );
              }
            }
          }
        }
        SharedData = NtCurrentPeb()->SharedData;
        if ( SharedData && SharedData->ServiceSessionId )
          v23 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
        else
          v23 = 2147353472LL;
        if ( *(_BYTE *)v23 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          if ( v20 )
          {
            LOBYTE(v6) = (*(_BYTE *)(v19 + 24) & 0xC) != 8;
            sub_1800FE3BC(*(_QWORD *)(v17 + 112), a2, (unsigned int)(v6 + 2));
          }
        }
      }
      return v20;
    }
LABEL_78:
    sub_18009A5F0(9, *(_QWORD *)(v17 + 112), a2, 0, 0LL, 0LL);
    return 0;
  }
  sub_18009A5F0(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
  return 0LL;
}

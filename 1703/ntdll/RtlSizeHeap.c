/*
 * XREFs of RtlSizeHeap @ 0x180023760
 * Callers:
 *     sub_1800222E0 @ 0x1800222E0 (sub_1800222E0.c)
 *     RtlSetEnvironmentVar @ 0x180062E60 (RtlSetEnvironmentVar.c)
 *     RtlSetEnvironmentStrings @ 0x180085E10 (RtlSetEnvironmentStrings.c)
 *     RtlSetCurrentEnvironment @ 0x18008E990 (RtlSetCurrentEnvironment.c)
 *     sub_1800F38C8 @ 0x1800F38C8 (sub_1800F38C8.c)
 *     sub_1800F6208 @ 0x1800F6208 (sub_1800F6208.c)
 *     sub_180101FF0 @ 0x180101FF0 (sub_180101FF0.c)
 * Callees:
 *     sub_180023990 @ 0x180023990 (sub_180023990.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180077158 @ 0x180077158 (sub_180077158.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     sub_180101FF0 @ 0x180101FF0 (sub_180101FF0.c)
 */

__int64 __fastcall RtlSizeHeap(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  char v9; // al
  __int64 v10; // rax
  unsigned __int16 v11; // r9
  char v12; // cl
  unsigned __int64 v13; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // eax
  unsigned __int16 v21; // ax
  int v22; // eax
  unsigned __int16 v23; // ax
  struct _TEB *v24; // rbx
  int v25; // eax
  int v26; // [rsp+38h] [rbp-10h]
  int v27; // [rsp+38h] [rbp-10h]
  int v28; // [rsp+38h] [rbp-10h]

  v3 = 0LL;
  if ( !a1 )
    sub_1800A4DFC(18, 0, a3, 0, 0LL, 0LL);
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (dword_180158684 & 2) != 0
      && a3
      && ((_WORD)a3 || !(unsigned int)sub_1800588D4(&qword_180159600, a3 >> 16, 1LL)) )
    {
      v16 = a3 - 16;
    }
    else
    {
      v16 = a3;
    }
    v17 = a2 & 1;
    if ( (a2 & 8) != 0 )
      v17 = (unsigned int)v17 | 2;
    if ( (a2 & 4) != 0 )
      LODWORD(v17) = v17 | 0x80000000;
    if ( (a2 & 0x100) != 0 )
      LODWORD(v17) = v17 | 0x100;
    if ( (a2 & 0xE00) != 0 )
      v17 = a2 & 0xE00 | (unsigned int)v17;
    if ( (a2 & 0x10) != 0 )
      LODWORD(v17) = v17 | 0x2000000;
    if ( (a2 & 2) != 0 )
      LODWORD(v17) = v17 | 0x1000000;
    v18 = sub_180023990(a1, v16, v17);
    v19 = v18;
    if ( v18 == -1 )
    {
      sub_1800A4DFC(9, a1, a3, 0, 0LL, 0LL);
    }
    else if ( (dword_180158684 & 2) != 0 )
    {
      return v18 - 16;
    }
    return v19;
  }
  else
  {
    v7 = a2 | *(_DWORD *)(a1 + 116);
    if ( (v7 & 0x61000000) == 0 || (v7 & 0x10000000) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
      {
        v8 = sub_180077158(a1, a3);
      }
      else if ( (a3 & 0xF) != 0 )
      {
        sub_1800A4DFC(9, a1, a3, 0, 0LL, 0LL);
        v8 = 0LL;
      }
      else
      {
        v8 = a3 - 16;
        _m_prefetchw((const void *)(a3 - 16));
        if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
          v8 -= 16LL * *(unsigned __int8 *)(v8 + 14);
        if ( (*(_BYTE *)(v8 + 15) & 0x3F) == 0 )
        {
          sub_1800A4DFC(8, a1, v8, 0, 0LL, 0LL);
          v8 = 0LL;
        }
      }
      if ( v8 )
      {
        v9 = *(_BYTE *)(v8 + 15);
        if ( v9 == 4 )
        {
          if ( *(_DWORD *)(a1 + 124) )
          {
            v22 = *(_DWORD *)(v8 + 8);
            LOWORD(v27) = v22;
            if ( (v22 & *(_DWORD *)(a1 + 124)) != 0 )
              v27 = *(_DWORD *)(a1 + 136) ^ v22;
            v23 = v27;
          }
          else
          {
            v23 = *(_WORD *)(v8 + 8);
          }
          return *(_QWORD *)(v8 - 16) - v23;
        }
        else
        {
          if ( v9 >= 0 )
          {
            if ( *(_DWORD *)(a1 + 124) )
            {
              v20 = *(_DWORD *)(v8 + 8);
              LOWORD(v26) = v20;
              if ( (v20 & *(_DWORD *)(a1 + 124)) != 0 )
                v26 = *(_DWORD *)(a1 + 136) ^ v20;
              v11 = v26;
            }
            else
            {
              v11 = *(_WORD *)(v8 + 8);
            }
          }
          else
          {
            if ( (unsigned __int16)qword_18015BFE8 ^ (unsigned __int16)(a1 ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4)) )
              v10 = 0LL;
            else
              v10 = *(_QWORD *)(v8
                              - ((unsigned __int64)((unsigned int)qword_18015BFE8 ^ (unsigned int)a1 ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12));
            v11 = *(_WORD *)(v10 + 36);
          }
          v12 = *(_BYTE *)(v8 + 15);
          if ( v12 == 5 )
          {
            v13 = *(unsigned __int16 *)(v8 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
          }
          else if ( (v12 & 0x40) != 0 )
          {
            v13 = *(unsigned __int16 *)(v8 + 16LL * (v12 & 0x3F) + 12);
          }
          else if ( (v12 & 0x3F) == 0x3F )
          {
            if ( v12 >= 0 )
            {
              if ( *(_DWORD *)(a1 + 124) )
              {
                v25 = *(_DWORD *)(v8 + 8);
                LOWORD(v28) = v25;
                if ( (v25 & *(_DWORD *)(a1 + 124)) != 0 )
                  v28 = *(_DWORD *)(a1 + 136) ^ v25;
                v21 = v28;
              }
              else
              {
                v21 = *(_WORD *)(v8 + 8);
              }
            }
            else
            {
              if ( !((unsigned __int16)qword_18015BFE8 ^ (unsigned __int16)(a1 ^ *(_WORD *)(v8 + 8) ^ (v8 >> 4))) )
                v3 = *(_QWORD *)(v8
                               - ((unsigned __int64)((unsigned int)qword_18015BFE8 ^ (unsigned int)a1 ^ *(_DWORD *)(v8 + 8) ^ (unsigned int)(v8 >> 4)) >> 12));
              v21 = *(_WORD *)(v3 + 36);
            }
            v13 = *(_QWORD *)(v8 + 16LL * v21);
          }
          else
          {
            v13 = v12 & 0x3F;
          }
          return 16LL * v11 - v13;
        }
      }
      else
      {
        NtCurrentTeb()->LastStatusValue = -1073741811;
        v24 = NtCurrentTeb();
        v24->LastErrorValue = RtlNtStatusToDosError(-1073741811);
        return -1LL;
      }
    }
    else
    {
      return sub_180101FF0(a1, v7, a3);
    }
  }
}

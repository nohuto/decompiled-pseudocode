/*
 * XREFs of sub_18002BBDC @ 0x18002BBDC
 * Callers:
 *     sub_180040514 @ 0x180040514 (sub_180040514.c)
 *     sub_180043144 @ 0x180043144 (sub_180043144.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180010300 (RtlImageNtHeaderEx.c)
 *     sub_18002235C @ 0x18002235C (sub_18002235C.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18002AFBC @ 0x18002AFBC (sub_18002AFBC.c)
 *     sub_18002BDB8 @ 0x18002BDB8 (sub_18002BDB8.c)
 *     sub_18002BF70 @ 0x18002BF70 (sub_18002BF70.c)
 *     sub_18002C068 @ 0x18002C068 (sub_18002C068.c)
 *     sub_18002C0DC @ 0x18002C0DC (sub_18002C0DC.c)
 *     sub_18002C268 @ 0x18002C268 (sub_18002C268.c)
 *     sub_18002C388 @ 0x18002C388 (sub_18002C388.c)
 *     sub_180039100 @ 0x180039100 (sub_180039100.c)
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     sub_180070738 @ 0x180070738 (sub_180070738.c)
 *     sub_180082EDC @ 0x180082EDC (sub_180082EDC.c)
 */

__int64 __fastcall sub_18002BBDC(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rdi
  unsigned __int64 v5; // r8
  unsigned int v6; // r15d
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  int v10; // r8d
  int v11; // edx
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rcx
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF
  int v20; // [rsp+78h] [rbp+20h] BYREF
  int v21; // [rsp+7Ch] [rbp+24h]

  v2 = sub_18002BDB8();
  v3 = v2;
  if ( v2 != 1073741838 && v2 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    v5 = *(_QWORD *)(a1 + 160);
    v18 = 0LL;
    v6 = v2;
    v3 = RtlImageNtHeaderEx(0, *(_QWORD *)(v4 + 48), v5, &v19);
    if ( v3 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
      {
        v17 = v19;
        v6 = 0;
        *(_DWORD *)(v4 + 128) = *(_DWORD *)(v19 + 8);
        *(_DWORD *)(v4 + 64) = *(_DWORD *)(v17 + 80);
      }
      else
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, v7, v8, v9);
        v10 = *(_DWORD *)(a1 + 32);
        v11 = 0;
        if ( (v10 & 0x20) == 0 )
          v11 = v4 + 72;
        v12 = sub_18002BF70((int)v4 + 88, v11, v10, (unsigned int)&v18, *(_DWORD *)(v4 + 264));
        v13 = v19;
        if ( v12 == -1073741515 )
        {
          v14 = *(_QWORD *)(v4 + 48);
          v20 = *(_DWORD *)(v19 + 8);
          v21 = *(_DWORD *)(v19 + 80);
          sub_18002C388(v14, v19, &v20, &v18);
        }
        if ( !v18 )
        {
          sub_18002C268(v4);
          sub_18002235C(v4, v13);
        }
        RtlReleaseSRWLockExclusive(&qword_18015D070);
        if ( v18 )
        {
          sub_180070738(a1, v18);
          return (unsigned int)v3;
        }
      }
      if ( (HANDLE)qword_1801564D0 == NtCurrentTeb()->ClientId.UniqueThread )
      {
        return (unsigned int)-1073741275;
      }
      else
      {
        v3 = sub_18002C0DC(a1, v19, v6);
        if ( v3 >= 0 )
        {
          v3 = sub_18002AFBC(v4, *(_DWORD *)(a1 + 32), 1);
          if ( v3 >= 0 )
          {
            sub_18002C068(*(_QWORD *)(a1 + 48), v4);
            v15 = *(_QWORD *)(a1 + 48);
            if ( v15 )
              *(_QWORD *)(v4 + 184) = *(_QWORD *)(v15 + 48);
            if ( (*(_DWORD *)(a1 + 32) & 0x800000) == 0 && (*(_BYTE *)(v4 + 104) & 4) == 0 )
            {
              sub_18003BC9C(*(_QWORD *)(v4 + 48), v4 + 72, 5294LL);
              v3 = 0;
              *(_DWORD *)(*(_QWORD *)(v4 + 152) + 56LL) = 9;
            }
            else if ( (*(_DWORD *)(v4 + 104) & 0x1000000) != 0 )
            {
              return (unsigned int)sub_180082EDC(v4);
            }
            else
            {
              sub_180039100(a1);
              return (unsigned int)**(_DWORD **)(a1 + 40);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v3;
}

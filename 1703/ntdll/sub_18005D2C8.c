/*
 * XREFs of sub_18005D2C8 @ 0x18005D2C8
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180036E50 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_18005A0E4 @ 0x18005A0E4 (sub_18005A0E4.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_18002FBD4 @ 0x18002FBD4 (sub_18002FBD4.c)
 *     sub_18003660C @ 0x18003660C (sub_18003660C.c)
 *     RtlLcidToLocaleName @ 0x1800454D0 (RtlLcidToLocaleName.c)
 *     sub_18005D0E0 @ 0x18005D0E0 (sub_18005D0E0.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_18005D768 @ 0x18005D768 (sub_18005D768.c)
 *     sub_18005D9D8 @ 0x18005D9D8 (sub_18005D9D8.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800E20D4 @ 0x1800E20D4 (sub_1800E20D4.c)
 *     sub_180109064 @ 0x180109064 (sub_180109064.c)
 *     sub_180109360 @ 0x180109360 (sub_180109360.c)
 */

__int64 __fastcall sub_18005D2C8(
        unsigned __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6)
{
  __int64 v8; // rbx
  int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // edi
  _DWORD *v16; // rax
  int v17; // ecx
  __int128 v18; // xmm6
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  BOOL v23; // eax
  __int64 v24; // rcx
  int v25; // ecx
  __int64 v26; // rcx
  unsigned int i; // ebx
  unsigned int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+44h] [rbp-BCh] BYREF
  int v30; // [rsp+48h] [rbp-B8h]
  unsigned int LastErrorValue; // [rsp+4Ch] [rbp-B4h]
  _BYTE v32[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v33; // [rsp+52h] [rbp-AEh]
  char *v34; // [rsp+58h] [rbp-A8h]
  __int128 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+70h] [rbp-90h] BYREF
  char v37; // [rsp+80h] [rbp-80h] BYREF

  v30 = a3;
  LastErrorValue = NtCurrentTeb()->LastErrorValue;
  v8 = 0LL;
  v28 = 0;
  v9 = a4 & 0x80;
  sub_18002FBD4(&dword_18015A250, (__int64)&unk_18015A280, a3, a4);
  v11 = qword_18015A258;
  if ( !qword_18015A258 )
  {
    RtlEnterCriticalSection((__int64)&unk_18015A280);
    if ( !qword_18015A258 )
    {
      v29 = 0;
      v22 = sub_18005D9D8();
      if ( !v22 )
      {
        v23 = -sub_18005D0E0(v21, v20, (__int64)&v29);
        if ( ((unsigned __int8)v29 & (unsigned __int8)-v23 & 1) != 0 )
          v22 = sub_180109064(v24, ((v29 & (unsigned int)-v23) >> 1) & 1, ((v29 & (unsigned int)-v23) >> 2) & 1);
      }
      if ( !v22 )
        v22 = -1LL;
      qword_18015A258 = v22;
    }
    RtlLeaveCriticalSection((__int64)&unk_18015A280);
    v11 = qword_18015A258;
  }
  if ( v11 != -1
    && (!v11
     || (v13 = *(_QWORD *)(v11 + 16)) != 0
     && (v14 = *(_QWORD *)(v13 + 24)) != 0
     && (*(_DWORD *)(v14 + 48) & 0x100000) == 0) )
  {
    if ( a2 == 1024 || a2 == 2048 || a2 == 3072 || a2 == 5120 )
    {
      v34 = &v37;
      v33 = 170;
      if ( (int)RtlLcidToLocaleName(a2, (__int64)v32, 2, 0) < 0 )
        goto LABEL_3;
      v15 = sub_180109360(v26, v34);
      if ( !v15 )
        goto LABEL_3;
    }
    else
    {
      v15 = a2;
    }
    v16 = sub_18003660C(a1, v10, 0, 1);
    if ( v16 && *v16 == -20054323 )
    {
      v18 = *(_OWORD *)(v16 + 7);
      v19 = v30;
      v35 = v18;
      v8 = sub_18005D768(v17, (unsigned int)&v35, v15, v30, 16, (__int64)&v28, (__int64)a5);
      if ( v8 == -2 )
      {
        if ( v9
          || (RtlEnterCriticalSection((__int64)&unk_18015A280),
              v36 = v18,
              v8 = sub_18005D768(v25, (unsigned int)&v36, v15, v19, 0, (__int64)&v28, (__int64)a5),
              RtlLeaveCriticalSection((__int64)&unk_18015A280),
              v8 == -2) )
        {
          v8 = 0LL;
        }
      }
      if ( ((v8 + 3) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
      {
        if ( word_18015BF84 )
        {
          RtlEnterCriticalSection((__int64)&unk_18015A280);
          for ( i = 0; i < (unsigned __int16)word_18015BF84; sub_1800E20D4(dword_18015BF70[i++]) )
            ;
          word_18015BF84 = 0;
          RtlLeaveCriticalSection((__int64)&unk_18015A280);
        }
        v8 = 0LL;
      }
    }
  }
LABEL_3:
  RtlSetLastWin32Error(LastErrorValue);
  if ( v8 )
  {
    if ( a6 )
      *a6 = v28;
  }
  else if ( a5 )
  {
    *a5 = -1;
  }
  return v8;
}

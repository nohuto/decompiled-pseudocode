/*
 * XREFs of sub_18005EAF0 @ 0x18005EAF0
 * Callers:
 *     EtwTraceMessageVa @ 0x18005EA30 (EtwTraceMessageVa.c)
 * Callees:
 *     sub_18005F2B4 @ 0x18005F2B4 (sub_18005F2B4.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_180104B00 @ 0x180104B00 (sub_180104B00.c)
 */

__int64 __fastcall sub_18005EAF0(unsigned __int16 a1, char a2, signed __int32 *a3, __int16 a4, __int64 a5)
{
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 result; // rax
  int v10; // r12d
  unsigned int v11; // edi
  __int64 v12; // rsi
  __int64 i; // rcx
  __int64 v14; // r14
  __int64 v15; // rax
  signed __int32 v16; // ecx
  volatile signed __int32 *v17; // rdx
  signed __int32 *v18; // rdi
  struct _TEB *v19; // rcx
  __int64 v20; // rsi
  const void *v21; // rdx
  size_t v22; // rbx
  int v23; // eax
  signed __int32 *v24; // [rsp+30h] [rbp-98h]
  unsigned int v25; // [rsp+38h] [rbp-90h]
  __int64 v26; // [rsp+40h] [rbp-88h]
  __int64 v27; // [rsp+60h] [rbp-68h] BYREF
  __int64 v28; // [rsp+68h] [rbp-60h]
  __int64 v29; // [rsp+70h] [rbp-58h] BYREF
  signed __int32 UniqueThread; // [rsp+78h] [rbp-50h]
  signed __int32 UniqueProcess; // [rsp+7Ch] [rbp-4Ch]
  __int64 v32; // [rsp+80h] [rbp-48h]
  struct _TEB *v33; // [rsp+88h] [rbp-40h]
  const void *v34; // [rsp+90h] [rbp-38h]
  unsigned int v35; // [rsp+D0h] [rbp+8h] BYREF
  __int16 v36; // [rsp+E8h] [rbp+20h]

  v36 = a4;
  v27 = 0LL;
  v35 = a1 & 0x7FFF;
  if ( !qword_1801593C0 )
    return 4201LL;
  if ( (a1 & 0x7FFFu) < 0x40 || (result = sub_180104B00(a1, &v35), !(_DWORD)result) )
  {
    v7 = 2LL * v35;
    _InterlockedIncrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * v35 + 8));
    v8 = *(_QWORD *)(qword_1801593C0 + 8 * v7);
    if ( (*(_BYTE *)(qword_1801593C0 + 8 * v7) & 1) == 0 )
    {
      v26 = *(_QWORD *)(qword_1801593C0 + 8 * v7);
      result = 0LL;
      goto LABEL_5;
    }
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 8 * v7 + 8));
    return 4201LL;
  }
  v8 = v26;
LABEL_5:
  v25 = result;
  if ( !(_DWORD)result )
  {
    v10 = a2 & 0x18;
    if ( !*(_QWORD *)(v8 + 400) )
      a2 &= ~1u;
    v11 = ((a2 & 0x20) != 0 ? 8 : 0)
        + (v10 != 0 ? 16 : 8)
        + ((a2 & 4) != 0 ? 4 : 0)
        + ((a2 & 1) != 0 ? 4 : 0)
        + ((a2 & 2) != 0 ? 0x10 : 0);
    v12 = a5;
    for ( i = a5 - 8; *(_QWORD *)(i + 8); v11 += *(_DWORD *)i )
    {
      i += 16LL;
      if ( v11 + *(_DWORD *)i < v11 )
        return 534LL;
    }
    v33 = NtCurrentTeb();
    v14 = v26;
    v15 = sub_18005F2B4(
            v26,
            v11,
            v33->CurrentIdealProcessor.Reserved,
            (unsigned __int64)&v27 & -(__int64)(v10 != 0),
            &v29);
    v32 = v15;
    v16 = 0;
    v17 = *(volatile signed __int32 **)(v8 + 400);
    if ( v17 )
    {
      v16 = _InterlockedIncrement(v17);
      v14 = v26;
      v15 = v32;
    }
    if ( !v15 )
    {
      if ( v11 <= 0xFFF8 )
        v23 = *(_DWORD *)(v14 + 212) < v11 ? 234 : 8;
      else
        v23 = 534;
      v25 = v23;
LABEL_34:
      _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * *(unsigned int *)(v14 + 20) + 8));
      return v25;
    }
    *(_DWORD *)v15 = -1879048192;
    *(_WORD *)v15 = v11;
    *(_WORD *)(v15 + 6) = a2 & 0x3F | 0x80;
    *(_WORD *)(v15 + 4) = v36;
    v18 = (signed __int32 *)(v15 + 8);
    v24 = (signed __int32 *)(v15 + 8);
    if ( (a2 & 1) != 0 )
    {
      *v18 = v16;
      v18 = (signed __int32 *)(v15 + 12);
      v24 = (signed __int32 *)(v15 + 12);
    }
    if ( (a2 & 4) != 0 )
    {
      *v18++ = *a3;
    }
    else
    {
      if ( (a2 & 2) == 0 )
      {
LABEL_21:
        if ( v10 )
        {
          *(_QWORD *)v18 = v27;
          v18 += 2;
          v24 = v18;
        }
        if ( (a2 & 0x20) != 0 )
        {
          v19 = NtCurrentTeb();
          UniqueThread = (signed __int32)v19->ClientId.UniqueThread;
          *v24 = UniqueThread;
          UniqueProcess = (signed __int32)v19->ClientId.UniqueProcess;
          v24[1] = UniqueProcess;
          v18 = v24 + 2;
        }
        v28 = v12;
        while ( 1 )
        {
          v20 = v12 + 8;
          v28 = v20;
          v21 = *(const void **)(v20 - 8);
          v34 = v21;
          if ( !v21 )
            break;
          v12 = v20 + 8;
          v28 = v12;
          v22 = *(_QWORD *)(v12 - 8);
          memmove(v18, v21, v22);
          v18 = (signed __int32 *)((char *)v18 + v22);
        }
        _InterlockedDecrement((volatile signed __int32 *)(v29 + 12));
        v14 = v26;
        goto LABEL_34;
      }
      *(_OWORD *)v18 = *(_OWORD *)a3;
      v18 += 4;
    }
    v24 = v18;
    goto LABEL_21;
  }
  return result;
}

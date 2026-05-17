/*
 * XREFs of RtlQueryInformationActivationContext @ 0x180017DF0
 * Callers:
 *     RtlQueueWorkItem @ 0x180012480 (RtlQueueWorkItem.c)
 *     sub_180017B34 @ 0x180017B34 (sub_180017B34.c)
 *     sub_180081AF4 @ 0x180081AF4 (sub_180081AF4.c)
 *     RtlQueryInformationActiveActivationContext @ 0x180085B90 (RtlQueryInformationActiveActivationContext.c)
 * Callees:
 *     sub_1800183AC @ 0x1800183AC (sub_1800183AC.c)
 *     sub_180018440 @ 0x180018440 (sub_180018440.c)
 *     sub_18001A338 @ 0x18001A338 (sub_18001A338.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_180030264 @ 0x180030264 (sub_180030264.c)
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 *     DbgPrintEx @ 0x18005FEB0 (DbgPrintEx.c)
 *     sub_18007E938 @ 0x18007E938 (sub_18007E938.c)
 *     sub_18007EA24 @ 0x18007EA24 (sub_18007EA24.c)
 *     sub_18007EC78 @ 0x18007EC78 (sub_18007EC78.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800E0520 @ 0x1800E0520 (sub_1800E0520.c)
 *     sub_1800E07A8 @ 0x1800E07A8 (sub_1800E07A8.c)
 *     sub_1800E0A28 @ 0x1800E0A28 (sub_1800E0A28.c)
 */

__int64 __fastcall RtlQueryInformationActivationContext(
        int a1,
        const void *a2,
        _DWORD *a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  const void *v8; // rdi
  int v9; // ebx
  struct _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  int v11; // edx
  int v12; // ebx
  int v13; // r9d
  __int64 v14; // r10
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // [rsp+40h] [rbp-98h]
  __int64 v21; // [rsp+48h] [rbp-90h] BYREF
  int v22; // [rsp+50h] [rbp-88h] BYREF
  int v23; // [rsp+54h] [rbp-84h]
  __int64 v24; // [rsp+58h] [rbp-80h] BYREF
  __int128 v25; // [rsp+60h] [rbp-78h] BYREF
  __int64 v26; // [rsp+70h] [rbp-68h]
  _DWORD v27[8]; // [rsp+78h] [rbp-60h] BYREF
  const void *v29; // [rsp+E8h] [rbp+10h]

  v29 = a2;
  v8 = a2;
  v9 = a1;
  memset(v27, 0, sizeof(v27));
  v24 = 0LL;
  v21 = 0LL;
  v27[6] = 4;
  if ( a7 )
    *a7 = 0LL;
  if ( (v9 & 0x3FFFFFF8) != 0 )
    goto LABEL_51;
  if ( v9 < 0 && (((a4 - 1) & 0xFFFFFFFA) != 0 || a4 == 2) )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      v9,
      a4);
    goto LABEL_53;
  }
  if ( (unsigned int)(a4 - 1) > 6 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      a4);
    v12 = -1073741583;
    goto LABEL_82;
  }
  if ( a6 )
  {
    if ( !a5 )
    {
      DbgPrintEx(
        51LL,
        0LL,
        "SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
        "RtlQueryInformationActivationContext");
      v12 = -1073741582;
      goto LABEL_82;
    }
  }
  else if ( !a7 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      "RtlQueryInformationActivationContext");
    v12 = -1073741580;
    goto LABEL_82;
  }
  if ( (v9 & 7) == 0 )
    goto LABEL_13;
  if ( (v9 & 7) == 1 )
  {
    if ( !v8 )
    {
      ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
      if ( ActivationContextStackPointer->ActiveFrame )
        v8 = (const void *)*((_QWORD *)ActivationContextStackPointer->ActiveFrame + 1);
      else
        v8 = v29;
      goto LABEL_13;
    }
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - caller asked to use active activation context but passed %p\n",
      "RtlQueryInformationActivationContext",
      v8);
LABEL_59:
    v12 = -1073741584;
    goto LABEL_82;
  }
  if ( (v9 & 7) != 2 )
  {
    if ( (v9 & 7) == 4 )
    {
      if ( !v8 )
      {
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
          "RtlQueryInformationActivationContext");
        goto LABEL_59;
      }
      if ( (unsigned __int64)v8 < *((_QWORD *)&xmmword_18016B4C0 + 1)
        || (unsigned __int64)v8 >= *((_QWORD *)&xmmword_18016B4C0 + 1) + (unsigned __int64)(unsigned int)qword_18016B4D0 )
      {
        sub_180034A40(v8, &v25);
      }
      else
      {
        v25 = xmmword_18016B4C0;
        v26 = qword_18016B4D0;
      }
      if ( !*((_QWORD *)&v25 + 1) )
      {
        DbgPrintEx(
          51LL,
          0LL,
          "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
          "RtlQueryInformationActivationContext",
          v8);
        v12 = -1073741515;
        goto LABEL_82;
      }
      v8 = (const void *)*((_QWORD *)&v25 + 1);
      v29 = (const void *)*((_QWORD *)&v25 + 1);
      goto LABEL_28;
    }
LABEL_51:
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      v9);
LABEL_53:
    v12 = -1073741585;
    goto LABEL_82;
  }
LABEL_28:
  if ( !v8 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
      "RtlQueryInformationActivationContext");
    goto LABEL_59;
  }
  v17 = sub_180030264(v8, &v21, &v22);
  v12 = v17;
  v20 = v17;
  if ( v17 >= 0 && v22 < 5 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v12 = v17;
    }
    else
    {
      sub_18001AE14(0LL);
      v18 = v20;
      if ( *(_DWORD *)(*(_QWORD *)(v21 + 152) + 56LL) != 9 )
        v18 = -1073741515;
      v12 = v18;
      sub_18001A338();
    }
    v8 = v29;
  }
  if ( v12 < 0 )
  {
    DbgPrintEx(
      51LL,
      0LL,
      "SXS: %s() - Caller passed invalid hmodule (%p)\n",
      "RtlQueryInformationActivationContext",
      v8);
    goto LABEL_82;
  }
  v8 = *(const void **)(v21 + 136);
  v9 = a1;
LABEL_13:
  v12 = sub_1800183AC(1LL, v8, (unsigned __int64)v27 & -(__int64)((v9 & 0x40000000) != 0), &v24);
  if ( v12 < 0 )
    goto LABEL_82;
  v14 = v24;
  if ( !v24 && (unsigned int)(a4 - 2) <= 5 )
    goto LABEL_53;
  v15 = a4 - 1;
  switch ( a4 )
  {
    case 1:
      v23 &= v15;
      if ( a1 < v15 )
        v15 = 1;
      v23 = v15;
      v16 = sub_180018440(v15, v11, v24, v13, a5, a6, (__int64)a7);
LABEL_19:
      v12 = v16;
      if ( v16 < 0 )
        break;
      goto LABEL_20;
    case 2:
      v16 = sub_18007EA24(v24, v11, a5, a6, (__int64)a7);
      goto LABEL_19;
    case 3:
      if ( a3 )
      {
        v16 = sub_1800E0520(v24, *a3, a5, a6, (__int64)a7);
        goto LABEL_19;
      }
      goto LABEL_79;
    case 4:
      if ( a3 )
      {
        v16 = sub_1800E07A8(v24, (_DWORD)a3, a5, a6, (__int64)a7);
        goto LABEL_19;
      }
LABEL_79:
      v12 = -1073741811;
      break;
    case 5:
      if ( a6 >= 0xC )
      {
        *(_QWORD *)a5 = 0LL;
        *(_DWORD *)(a5 + 8) = 0;
        v12 = sub_18007E938((unsigned int)(a4 - 5), v14, a5);
        if ( v12 < 0 )
          break;
        if ( a7 )
          *a7 = 12LL;
LABEL_20:
        v12 = 0;
        break;
      }
      v12 = -1073741789;
      if ( a7 )
        *a7 = 12LL;
      break;
    case 6:
      v16 = sub_18007EC78(v24, a5, a6, a7);
      goto LABEL_19;
    case 7:
      v16 = sub_1800E0A28(v24, a5, a6, a7);
      goto LABEL_19;
    default:
      DbgPrintEx(
        51LL,
        0LL,
        "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
        "RtlQueryInformationActivationContext",
        a4);
      v12 = -1073741595;
      break;
  }
LABEL_82:
  if ( v21 )
    sub_18003015C(v21);
  return (unsigned int)v12;
}

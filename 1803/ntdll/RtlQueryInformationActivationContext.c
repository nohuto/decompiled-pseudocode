/*
 * XREFs of RtlQueryInformationActivationContext @ 0x180028A50
 * Callers:
 *     sub_180024CB8 @ 0x180024CB8 (sub_180024CB8.c)
 *     RtlQueueWorkItem @ 0x180057A90 (RtlQueueWorkItem.c)
 *     sub_18007C270 @ 0x18007C270 (sub_18007C270.c)
 *     RtlQueryInformationActiveActivationContext @ 0x1800803F0 (RtlQueryInformationActiveActivationContext.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18001FA3C @ 0x18001FA3C (sub_18001FA3C.c)
 *     sub_180028FE8 @ 0x180028FE8 (sub_180028FE8.c)
 *     sub_180029098 @ 0x180029098 (sub_180029098.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 *     sub_180047B2C @ 0x180047B2C (sub_180047B2C.c)
 *     sub_180078F24 @ 0x180078F24 (sub_180078F24.c)
 *     sub_180079010 @ 0x180079010 (sub_180079010.c)
 *     sub_180079264 @ 0x180079264 (sub_180079264.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800D9DA0 @ 0x1800D9DA0 (sub_1800D9DA0.c)
 *     sub_1800DA028 @ 0x1800DA028 (sub_1800DA028.c)
 *     sub_1800DA2A8 @ 0x1800DA2A8 (sub_1800DA2A8.c)
 */

__int64 __fastcall RtlQueryInformationActivationContext(
        int a1,
        unsigned __int64 a2,
        _DWORD *a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  unsigned __int64 v8; // rdi
  struct _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  int v11; // edx
  int v12; // ebx
  int v13; // r9d
  __int64 v14; // r10
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // [rsp+40h] [rbp-88h]
  unsigned __int64 v21; // [rsp+48h] [rbp-80h] BYREF
  int v22; // [rsp+50h] [rbp-78h] BYREF
  int v23; // [rsp+54h] [rbp-74h]
  __int64 v24; // [rsp+58h] [rbp-70h] BYREF
  __int128 v25; // [rsp+60h] [rbp-68h] BYREF
  __int64 v26; // [rsp+70h] [rbp-58h]
  _DWORD v27[8]; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+D8h] [rbp+10h]

  v28 = a2;
  v8 = a2;
  memset(v27, 0, sizeof(v27));
  v24 = 0LL;
  v21 = 0LL;
  v27[6] = 4;
  if ( a7 )
    *a7 = 0LL;
  if ( (a1 & 0x3FFFFFF8) != 0 )
    goto LABEL_51;
  if ( a1 < 0 && (((a4 - 1) & 0xFFFFFFFA) != 0 || a4 == 2) )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      a1,
      a4);
LABEL_44:
    v12 = -1073741585;
    goto LABEL_80;
  }
  if ( (unsigned int)(a4 - 1) > 6 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      a4);
    v12 = -1073741583;
    goto LABEL_80;
  }
  if ( a6 )
  {
    if ( !a5 )
    {
      DbgPrintEx(
        51,
        0,
        (int)"SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
        "RtlQueryInformationActivationContext");
      v12 = -1073741582;
      goto LABEL_80;
    }
  }
  else if ( !a7 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      "RtlQueryInformationActivationContext");
    v12 = -1073741580;
    goto LABEL_80;
  }
  if ( (a1 & 7) == 0 )
    goto LABEL_13;
  if ( (a1 & 7) == 1 )
  {
    if ( !v8 )
    {
      ActivationContextStackPointer = NtCurrentTeb()->ActivationContextStackPointer;
      if ( ActivationContextStackPointer->ActiveFrame )
        v8 = *((_QWORD *)ActivationContextStackPointer->ActiveFrame + 1);
      else
        v8 = v28;
      goto LABEL_13;
    }
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() - caller asked to use active activation context but passed %p\n",
      "RtlQueryInformationActivationContext",
      v8);
LABEL_57:
    v12 = -1073741584;
    goto LABEL_80;
  }
  if ( (a1 & 7) != 2 )
  {
    if ( (a1 & 7) == 4 )
    {
      if ( !v8 )
      {
        DbgPrintEx(
          51,
          0,
          (int)"SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
          "RtlQueryInformationActivationContext");
        goto LABEL_57;
      }
      if ( v8 < *((_QWORD *)&xmmword_18016F4E0 + 1)
        || v8 >= *((_QWORD *)&xmmword_18016F4E0 + 1) + (unsigned __int64)(unsigned int)qword_18016F4F0 )
      {
        sub_18000EF10(v8, (__int64 *)&v25);
      }
      else
      {
        v25 = xmmword_18016F4E0;
        v26 = qword_18016F4F0;
      }
      if ( !*((_QWORD *)&v25 + 1) )
      {
        DbgPrintEx(
          51,
          0,
          (int)"SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
          "RtlQueryInformationActivationContext",
          v8);
        v12 = -1073741515;
        goto LABEL_80;
      }
      v8 = *((_QWORD *)&v25 + 1);
      v28 = *((_QWORD *)&v25 + 1);
      goto LABEL_28;
    }
LABEL_51:
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
      "RtlQueryInformationActivationContext",
      a1);
    goto LABEL_44;
  }
LABEL_28:
  if ( !v8 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
      "RtlQueryInformationActivationContext");
    goto LABEL_57;
  }
  v17 = sub_18001FA3C(v8, (__int64 *)&v21, &v22);
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
      sub_1800435B4(0LL);
      v18 = v20;
      if ( *(_DWORD *)(*(_QWORD *)(v21 + 152) + 56LL) != 9 )
        v18 = -1073741515;
      v12 = v18;
      sub_180047B2C();
    }
    v8 = v28;
  }
  if ( v12 < 0 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() - Caller passed invalid hmodule (%p)\n",
      "RtlQueryInformationActivationContext",
      v8);
    goto LABEL_80;
  }
  v8 = *(_QWORD *)(v21 + 136);
LABEL_13:
  v12 = sub_180028FE8(1LL, v8, (unsigned __int64)v27 & -(__int64)((a1 & 0x40000000) != 0), &v24);
  if ( v12 < 0 )
    goto LABEL_80;
  v14 = v24;
  if ( !v24 && (unsigned int)(a4 - 2) <= 5 )
    goto LABEL_44;
  v15 = a4 - 1;
  switch ( a4 )
  {
    case 1:
      v23 &= v15;
      if ( a1 < 0 )
        v15 = a4;
      v23 = v15;
      v16 = sub_180029098(v15, v11, v24, v13, a5, a6, (__int64)a7);
LABEL_19:
      v12 = v16;
      if ( v16 < 0 )
        break;
      goto LABEL_20;
    case 2:
      v16 = sub_180079010(v24, v11, a5, a6, (__int64)a7);
      goto LABEL_19;
    case 3:
      if ( a3 )
      {
        v16 = sub_1800D9DA0(v24, *a3, a5, a6, (__int64)a7);
        goto LABEL_19;
      }
      goto LABEL_77;
    case 4:
      if ( a3 )
      {
        v16 = sub_1800DA028(v24, (_DWORD)a3, a5, a6, (__int64)a7);
        goto LABEL_19;
      }
LABEL_77:
      v12 = -1073741811;
      break;
    case 5:
      if ( a6 >= 0xC )
      {
        *(_QWORD *)a5 = 0LL;
        *(_DWORD *)(a5 + 8) = 0;
        v12 = sub_180078F24((unsigned int)(a4 - 5), v14, a5);
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
      v16 = sub_180079264(v24, a5, a6, a7);
      goto LABEL_19;
    case 7:
      v16 = sub_1800DA2A8(v24, a5, a6, a7);
      goto LABEL_19;
    default:
      DbgPrintEx(
        51,
        0,
        (int)"SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
        "RtlQueryInformationActivationContext",
        a4);
      v12 = -1073741595;
      break;
  }
LABEL_80:
  if ( v21 )
    sub_18001F5FC(v21);
  return (unsigned int)v12;
}

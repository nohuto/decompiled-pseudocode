/*
 * XREFs of ProcessCommandInSpecificQueue @ 0x1C0010688
 * Callers:
 *     ProcessCommand @ 0x1C001052C (ProcessCommand.c)
 * Callees:
 *     SrbAssignCommandId @ 0x1C000DD54 (SrbAssignCommandId.c)
 *     ProcessCommandTrace @ 0x1C0010904 (ProcessCommandTrace.c)
 */

char __fastcall ProcessCommandInSpecificQueue(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v8; // rbx
  char v9; // r14
  __int64 v10; // r9
  unsigned __int16 v11; // ax
  _OWORD *v12; // rdx
  unsigned int v13; // edx
  int v14; // eax
  signed __int32 v16[8]; // [rsp+0h] [rbp-50h] BYREF
  int *v17; // [rsp+20h] [rbp-30h]
  int v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h]
  __int64 v20; // [rsp+40h] [rbp-10h]
  __int64 v21; // [rsp+48h] [rbp-8h]
  __int64 v22; // [rsp+98h] [rbp+48h] BYREF

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v8 = *(_QWORD *)(a2 + 104);
  else
    v8 = *(_QWORD *)(a2 + 56);
  if ( (v8 & 0xFFF) != 0 )
    v8 = v8 - (v8 & 0xFFF) + 4096;
  v19 = 0LL;
  v20 = 0LL;
  v9 = 1;
  v21 = 0LL;
  v18 = 1;
  if ( !*(_WORD *)(a3 + 40) )
    _InterlockedAdd16((volatile signed __int16 *)(a1 + 244), 1u);
  if ( (*(_DWORD *)(a1 + 20) & 0x10) != 0 )
  {
    *(_BYTE *)(a2 + 3) = 14;
LABEL_26:
    v9 = 0;
    goto LABEL_27;
  }
  v17 = &v18;
  StorPortNotification(4099LL, a1, 1LL, a3 + 56);
  if ( !SrbAssignCommandId(a1, v8, *(_WORD *)(a3 + 40)) )
  {
    StorPortNotification(4100LL, a1, &v18, v10);
    *(_BYTE *)(a2 + 3) = 5;
    goto LABEL_26;
  }
  v22 = 0LL;
  v11 = *(_WORD *)(v8 + 4246);
  *(_WORD *)(v8 + 4098) = v11;
  if ( *(_BYTE *)(a1 + 17) )
  {
    ProcessCommandTrace(a1, a2);
    v11 = *(_WORD *)(v8 + 4246);
  }
  *(_QWORD *)(*(_QWORD *)(a3 + 32) + 16LL * v11) = a2;
  *(_WORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(v8 + 4246) + 8) = *(_WORD *)(v8 + 4248);
  v12 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v8 + 4248));
  *v12 = *(_OWORD *)(v8 + 4096);
  v12[1] = *(_OWORD *)(v8 + 4112);
  v12[2] = *(_OWORD *)(v8 + 4128);
  v12[3] = *(_OWORD *)(v8 + 4144);
  *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v8 + 4248) + 8) = *(_WORD *)(v8 + 4246);
  if ( (*(_BYTE *)(a1 + 17) || (*(_DWORD *)(a1 + 88) & 2) != 0) && a2 != a1 + 600 )
  {
    v13 = 0;
    while ( a2 != 104LL * v13 + a1 + 704 )
    {
      if ( ++v13 >= 4 )
      {
        StorPortExtendedFunction(47LL, a1, 0LL, &v22);
        *(_QWORD *)(v8 + 4160) = v22;
        break;
      }
    }
  }
  _InterlockedAdd16((volatile signed __int16 *)(a3 + 128), 1u);
  v14 = (unsigned __int16)(*(_WORD *)(v8 + 4248) + 1);
  if ( (_WORD)v14 == a4 )
    v14 &= 0xFFFF0000;
  **(_DWORD **)(a3 + 16) = v14;
  _InterlockedOr(v16, 0);
  if ( *(_QWORD *)(v8 + 4160) )
  {
    StorPortExtendedFunction(47LL, a1, 0LL, &v22);
    *(_QWORD *)(v8 + 4168) = v22;
  }
  StorPortNotification(4100LL, a1, &v18, v10);
LABEL_27:
  if ( !*(_WORD *)(a3 + 40) )
    _InterlockedDecrement16((volatile signed __int16 *)(a1 + 244));
  return v9;
}

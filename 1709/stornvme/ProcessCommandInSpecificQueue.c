/*
 * XREFs of ProcessCommandInSpecificQueue @ 0x1C00101B4
 * Callers:
 *     ProcessCommand @ 0x1C0010058 (ProcessCommand.c)
 * Callees:
 *     SrbAssignCommandId @ 0x1C000D8A0 (SrbAssignCommandId.c)
 *     ProcessCommandTrace @ 0x1C0010430 (ProcessCommandTrace.c)
 */

char __fastcall ProcessCommandInSpecificQueue(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 v8; // rbx
  char v9; // r14
  __int64 v10; // r9
  _OWORD *v11; // rdx
  unsigned int v12; // edx
  int v13; // edx
  signed __int32 v15[8]; // [rsp+0h] [rbp-50h] BYREF
  int *v16; // [rsp+20h] [rbp-30h]
  int v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h]
  __int64 v19; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+48h] [rbp-8h]
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v8 = *(_QWORD *)(a2 + 104);
  else
    v8 = *(_QWORD *)(a2 + 56);
  if ( (v8 & 0xFFF) != 0 )
    v8 = v8 - (v8 & 0xFFF) + 4096;
  v9 = 1;
  v18 = 0LL;
  v17 = 1;
  v19 = 0LL;
  v20 = 0LL;
  if ( !*(_WORD *)(a3 + 40) )
    _InterlockedAdd16((volatile signed __int16 *)(a1 + 236), 1u);
  if ( (*(_DWORD *)(a1 + 20) & 0x10) != 0 )
  {
    *(_BYTE *)(a2 + 3) = 14;
LABEL_26:
    v9 = 0;
    goto LABEL_27;
  }
  v16 = &v17;
  StorPortNotification(4099LL, a1, 1LL, a3 + 56);
  if ( !SrbAssignCommandId(a1, v8, *(_WORD *)(a3 + 40)) )
  {
    StorPortNotification(4100LL, a1, &v17, v10);
    *(_BYTE *)(a2 + 3) = 5;
    goto LABEL_26;
  }
  v21 = 0LL;
  *(_WORD *)(v8 + 4098) = *(_WORD *)(v8 + 4238);
  if ( *(_BYTE *)(a1 + 17) )
    ProcessCommandTrace(a1, a2);
  *(_QWORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(v8 + 4238)) = a2;
  *(_WORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(v8 + 4238) + 8) = *(_WORD *)(v8 + 4240);
  v11 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v8 + 4240));
  *v11 = *(_OWORD *)(v8 + 4096);
  v11[1] = *(_OWORD *)(v8 + 4112);
  v11[2] = *(_OWORD *)(v8 + 4128);
  v11[3] = *(_OWORD *)(v8 + 4144);
  *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v8 + 4240) + 8) = *(_WORD *)(v8 + 4238);
  if ( (*(_BYTE *)(a1 + 17) || (*(_DWORD *)(a1 + 88) & 2) != 0) && a2 != a1 + 568 )
  {
    v12 = 0;
    while ( a2 != 104LL * v12 + a1 + 672 )
    {
      if ( ++v12 >= 4 )
      {
        StorPortExtendedFunction(47LL, a1, 0LL, &v21);
        *(_QWORD *)(v8 + 4160) = v21;
        break;
      }
    }
  }
  _InterlockedAdd16((volatile signed __int16 *)(a3 + 128), 1u);
  v13 = 0;
  if ( (unsigned __int16)(*(_WORD *)(v8 + 4240) + 1) != a4 )
    v13 = (unsigned __int16)(*(_WORD *)(v8 + 4240) + 1);
  **(_DWORD **)(a3 + 16) = v13;
  _InterlockedOr(v15, 0);
  if ( *(_QWORD *)(v8 + 4160) )
  {
    StorPortExtendedFunction(47LL, a1, 0LL, &v21);
    *(_QWORD *)(v8 + 4168) = v21;
  }
  StorPortNotification(4100LL, a1, &v17, v10);
LABEL_27:
  if ( !*(_WORD *)(a3 + 40) )
    _InterlockedDecrement16((volatile signed __int16 *)(a1 + 236));
  return v9;
}

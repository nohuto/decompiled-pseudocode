/*
 * XREFs of RIMIDE_CreateGenericHidDevice @ 0x1C010B328
 * Callers:
 *     NtUserInitializeGenericHidInjection @ 0x1C00E87C0 (NtUserInitializeGenericHidInjection.c)
 * Callees:
 *     rimHidP_GetUsageValue @ 0x1C0094650 (rimHidP_GetUsageValue.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     rimHidP_GetCollectionDescription @ 0x1C0107B34 (rimHidP_GetCollectionDescription.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0108FA8 (RIMIDECreatePseudoHIDDevice.c)
 */

__int64 __fastcall RIMIDE_CreateGenericHidDevice(__int64 a1, __int64 *a2)
{
  unsigned int v4; // ebx
  char *v5; // rcx
  unsigned __int16 v6; // dx
  __int16 v7; // cx
  __int64 v8; // rax
  _DWORD *Object; // [rsp+28h] [rbp-81h]
  __int64 v11; // [rsp+48h] [rbp-61h]
  unsigned int v12[4]; // [rsp+50h] [rbp-59h] BYREF
  __int64 v13[2]; // [rsp+60h] [rbp-49h] BYREF
  __int128 v14; // [rsp+70h] [rbp-39h]
  __int128 v15; // [rsp+80h] [rbp-29h]
  __int128 v16; // [rsp+90h] [rbp-19h]
  __int128 v17; // [rsp+A0h] [rbp-9h]
  __int128 v18; // [rsp+B0h] [rbp+7h]
  __int128 v19; // [rsp+C0h] [rbp+17h]
  __int128 v20; // [rsp+D0h] [rbp+27h]

  v12[0] = 1;
  v4 = 0;
  if ( (int)rimHidP_GetCollectionDescription(*(_QWORD *)(a1 + 32), *(unsigned __int16 *)(a1 + 40)) >= 0 )
  {
    v5 = *(char **)(a1 + 48);
    if ( v5 )
      rimHidP_GetUsageValue(
        HidP_Feature,
        0xDu,
        0,
        0x55u,
        v12,
        *(struct _HIDP_PREPARSED_DATA **)(v17 + 32),
        v5,
        *(unsigned __int16 *)(a1 + 56));
    v11 = *(_QWORD *)(a1 + 24);
    v14 = v18;
    *(_OWORD *)v13 = v17;
    v6 = *(_WORD *)(v17 + 2);
    v7 = *(_WORD *)v17;
    v15 = v19;
    v16 = v20;
    v8 = RIMIDECreatePseudoHIDDevice(v7, v6, v12[0], 1u, 0LL, Object, v13, 1, 0, v11);
    if ( v8 )
    {
      *a2 = v8;
      return 1;
    }
  }
  return v4;
}

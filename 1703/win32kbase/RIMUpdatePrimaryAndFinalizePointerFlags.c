/*
 * XREFs of RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01112F4
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C010E278 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMGetPointerInputType @ 0x1C0106658 (RIMGetPointerInputType.c)
 *     RIMUpdatePrimaryDevice @ 0x1C0106768 (RIMUpdatePrimaryDevice.c)
 *     rimFinalizePointerFlags @ 0x1C011318C (rimFinalizePointerFlags.c)
 *     rimIsPointerDevicePrimaryContactDown @ 0x1C0113428 (rimIsPointerDevicePrimaryContactDown.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C0116A4C (RIMCmActiveContactsBeginNoButton.c)
 *     ListTableIteratorNext @ 0x1C01180C8 (ListTableIteratorNext.c)
 *     ApiSetIsPointerInputTypeRedirected @ 0x1C013D1C8 (ApiSetIsPointerInputTypeRedirected.c)
 */

__int64 __fastcall RIMUpdatePrimaryAndFinalizePointerFlags(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  BOOL v4; // r12d
  int v5; // r14d
  __int64 active; // rax
  _QWORD *v8; // r13
  int v9; // esi
  __int64 v10; // xmm1_8
  __int128 v11; // xmm0
  unsigned int v12; // ecx
  __int64 result; // rax
  int v14; // ecx
  _DWORD *v15; // r8
  _BOOL8 v16; // r9
  BOOL v17; // ecx
  int v18; // eax
  unsigned int v19; // eax
  int IsPointerInputTypeRedirected; // eax
  __int64 v21; // rdx
  int v22; // r12d
  int v23; // r8d
  BOOL v24; // ecx
  BOOL v25; // r14d
  __int64 v26; // rcx
  int v27; // ebx
  __int128 v28; // [rsp+20h] [rbp-30h] BYREF
  __int64 v29; // [rsp+30h] [rbp-20h]
  _BYTE v30[24]; // [rsp+38h] [rbp-18h] BYREF

  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  active = RIMCmActiveContactsBeginNoButton(v30, a2);
  v8 = (_QWORD *)(a2 + 1560);
  v9 = 1;
  while ( 1 )
  {
    v10 = *(_QWORD *)(active + 16);
    v11 = *(_OWORD *)active;
    v12 = *(_DWORD *)(a2 + 1568);
    v29 = v10;
    result = *v8 + 16LL * v12;
    v28 = v11;
    if ( (_QWORD *)v11 == v8 && DWORD2(v28) == v12 && v10 == result )
      break;
    v14 = *(_DWORD *)(v10 + 2604);
    v15 = (_DWORD *)(v10 - 16);
    v16 = (v14 & 2) == 0 && (v15[601] & 2) != 0;
    v17 = (v14 & 4) == 0 && (v15[601] & 4) != 0;
    v18 = v5 + 1;
    if ( (v15[655] & 2) == 0 )
      v18 = v5;
    v5 = v18;
    if ( (v15[580] & 1) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 1584) && (v16 || v17) && !v3 && !v15[2] )
      {
        v3 = v10 - 16;
        v4 = (v15[655] & 2) != 0;
      }
      rimFinalizePointerFlags(a1, a2, v15, v16, v28);
    }
    active = ListTableIteratorNext(v30, &v28);
  }
  if ( v3 && (!v5 || v5 == 1 && v4) )
  {
    *(_DWORD *)(v3 + 32) |= 8u;
    *(_QWORD *)(a2 + 1584) = v3;
  }
  if ( *(_QWORD *)(a2 + 1584) )
  {
    v19 = RIMGetPointerInputType(a2);
    IsPointerInputTypeRedirected = ApiSetIsPointerInputTypeRedirected(v19);
    v21 = *(_QWORD *)(a2 + 1584);
    v22 = IsPointerInputTypeRedirected;
    v23 = *(_DWORD *)(v21 + 2620);
    v24 = (v23 & 2) == 0 && (*(_DWORD *)(v21 + 2404) & 2) != 0;
    result = (v23 & 4) == 0 && (*(_DWORD *)(v21 + 2404) & 4) != 0;
    v25 = v24 || (_DWORD)result;
    v26 = *(_QWORD *)(a1 + 608);
    if ( v26 )
    {
      v27 = RIMGetPointerInputType(v26);
      result = RIMGetPointerInputType(a2);
      if ( v27 == (_DWORD)result
        || (result = rimIsPointerDevicePrimaryContactDown(*(_QWORD *)(a1 + 608)), (_DWORD)result)
        || (result = rimIsPointerDevicePrimaryContactDown(a2), !(_DWORD)result) )
      {
        if ( !*(_DWORD *)(a1 + 616) || v22 )
          v9 = 0;
      }
    }
    if ( v25 && v9 )
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 1584) + 2404LL) |= 0x2000u;
      return RIMUpdatePrimaryDevice(a1, a2);
    }
  }
  return result;
}

/*
 * XREFs of RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C010FDC4
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C010D1BC (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     ListTableIteratorNext @ 0x1C008C710 (ListTableIteratorNext.c)
 *     RIMGetPointerInputType @ 0x1C0107340 (RIMGetPointerInputType.c)
 *     RIMUpdatePrimaryDevice @ 0x1C0107450 (RIMUpdatePrimaryDevice.c)
 *     rimFinalizePointerFlags @ 0x1C0111C78 (rimFinalizePointerFlags.c)
 *     rimIsPointerDevicePrimaryContactDown @ 0x1C0111F10 (rimIsPointerDevicePrimaryContactDown.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01155C0 (RIMCmActiveContactsBeginNoButton.c)
 *     ApiSetIsPointerInputTypeRedirected @ 0x1C013C698 (ApiSetIsPointerInputTypeRedirected.c)
 */

char __fastcall RIMUpdatePrimaryAndFinalizePointerFlags(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  BOOL v4; // r15d
  int v5; // r14d
  __int64 **active; // rax
  _QWORD *v8; // r12
  int v9; // esi
  __int64 *v10; // xmm1_8
  __int128 v11; // xmm0
  unsigned int v12; // ecx
  __int64 v13; // rax
  int IsPointerDevicePrimaryContactDown; // eax
  int v15; // ecx
  __int64 *v16; // r8
  int v17; // r9d
  BOOL v18; // edx
  BOOL v19; // ecx
  int v20; // eax
  unsigned int v21; // eax
  int IsPointerInputTypeRedirected; // eax
  __int64 v23; // rdx
  int v24; // r15d
  int v25; // r8d
  BOOL v26; // ecx
  BOOL v27; // r14d
  __int64 v28; // rcx
  int v29; // ebx
  __int128 v31; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v32; // [rsp+30h] [rbp-20h]
  __int64 *v33[3]; // [rsp+38h] [rbp-18h] BYREF

  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  active = (__int64 **)RIMCmActiveContactsBeginNoButton(v33, a2);
  v8 = (_QWORD *)(a2 + 896);
  v9 = 1;
  while ( 1 )
  {
    v10 = active[2];
    v11 = *(_OWORD *)active;
    v12 = *(_DWORD *)(a2 + 904);
    v32 = v10;
    v13 = *v8 + 16LL * v12;
    v31 = v11;
    LOBYTE(IsPointerDevicePrimaryContactDown) = (_QWORD *)v11 != v8 || DWORD2(v31) != v12 || v10 != (__int64 *)v13;
    if ( !(_BYTE)IsPointerDevicePrimaryContactDown )
      break;
    v15 = *((_DWORD *)v10 + 651);
    v16 = v10 - 2;
    v17 = v15 & 2;
    v18 = (v15 & 2) == 0 && (*((_DWORD *)v16 + 601) & 2) != 0;
    v19 = (v15 & 4) == 0 && (*((_DWORD *)v16 + 601) & 4) != 0;
    v20 = v5 + 1;
    if ( !v17 )
      v20 = v5;
    v5 = v20;
    if ( (v16[290] & 1) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 920) && (v18 || v19) && !v3 && !*((_DWORD *)v16 + 2) )
      {
        v3 = v10 - 2;
        v4 = v17 != 0;
      }
      rimFinalizePointerFlags(a1, a2);
    }
    active = ListTableIteratorNext(v33, (__int64)&v31);
  }
  if ( v3 && (!v5 || v5 == 1 && v4) )
  {
    *((_DWORD *)v3 + 8) |= 8u;
    *(_QWORD *)(a2 + 920) = v3;
  }
  if ( *(_QWORD *)(a2 + 920) )
  {
    v21 = RIMGetPointerInputType(a2);
    IsPointerInputTypeRedirected = ApiSetIsPointerInputTypeRedirected(v21);
    v23 = *(_QWORD *)(a2 + 920);
    v24 = IsPointerInputTypeRedirected;
    v25 = *(_DWORD *)(v23 + 2620);
    v26 = (v25 & 2) == 0 && (*(_DWORD *)(v23 + 2404) & 2) != 0;
    IsPointerDevicePrimaryContactDown = (v25 & 4) == 0 && (*(_DWORD *)(v23 + 2404) & 4) != 0;
    v27 = v26 || IsPointerDevicePrimaryContactDown;
    v28 = *(_QWORD *)(a1 + 608);
    if ( v28 )
    {
      v29 = RIMGetPointerInputType(v28);
      IsPointerDevicePrimaryContactDown = RIMGetPointerInputType(a2);
      if ( (v29 == IsPointerDevicePrimaryContactDown
         || (IsPointerDevicePrimaryContactDown = rimIsPointerDevicePrimaryContactDown(*(_QWORD *)(a1 + 608))) != 0
         || (IsPointerDevicePrimaryContactDown = rimIsPointerDevicePrimaryContactDown(a2)) == 0)
        && (!*(_DWORD *)(a1 + 616) || v24) )
      {
        v9 = 0;
      }
    }
    if ( v27 && v9 )
    {
      *(_DWORD *)(*(_QWORD *)(a2 + 920) + 2404LL) |= 0x2000u;
      LOBYTE(IsPointerDevicePrimaryContactDown) = RIMUpdatePrimaryDevice(a1, a2);
    }
  }
  return IsPointerDevicePrimaryContactDown;
}

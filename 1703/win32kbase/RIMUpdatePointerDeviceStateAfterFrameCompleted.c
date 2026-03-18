/*
 * XREFs of RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0111020
 * Callers:
 *     RIMAbandonPointerDeviceFrame @ 0x1C010E1D0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C010E278 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMRemoveFromActiveDevices @ 0x1C00096B0 (RIMRemoveFromActiveDevices.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     RIMUpdatePrimaryDevice @ 0x1C0106768 (RIMUpdatePrimaryDevice.c)
 *     RIMCmDeactivateContact @ 0x1C0116B14 (RIMCmDeactivateContact.c)
 *     ListTableIteratorNext @ 0x1C01180C8 (ListTableIteratorNext.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C0139F68 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 */

_DWORD *__fastcall RIMUpdatePointerDeviceStateAfterFrameCompleted(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  _DWORD *v10; // xmm1_8
  _DWORD *v11; // rbx
  _DWORD *result; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rax
  __int128 v34; // [rsp+20h] [rbp-30h] BYREF
  _DWORD *v35; // [rsp+30h] [rbp-20h]
  _BYTE v36[24]; // [rsp+38h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a2 + 472);
  v8 = *(_QWORD *)(v4 + 688);
  if ( v8 )
    *(_DWORD *)(v8 + 36) = 0;
  DWORD2(v34) = 0;
  v35 = *(_DWORD **)(v4 + 1560);
  *(_QWORD *)&v34 = v4 + 1560;
  v9 = ListTableIteratorNext(v36, &v34);
  v10 = *(_DWORD **)(v9 + 16);
  v34 = *(_OWORD *)v9;
  v35 = v10;
  while ( 1 )
  {
    v11 = v35;
    result = (_DWORD *)(*(_QWORD *)(v4 + 1560) + 16LL * *(unsigned int *)(v4 + 1568));
    if ( (_QWORD)v34 == v4 + 1560 && DWORD2(v34) == *(_DWORD *)(v4 + 1568) && v35 == result )
      break;
    if ( (v35[4] & 2) == 0 )
      __int2c();
    v13 = ListTableIteratorNext(v36, &v34);
    v35 = *(_DWORD **)(v13 + 16);
    v34 = *(_OWORD *)v13;
    if ( !a3 || (v11[576] & 1) == 0 )
      goto LABEL_26;
    v14 = v11[651] & 4;
    if ( (v11[651] & 4) != 0 || (v11[597] & 4) == 0 )
    {
      if ( !(_DWORD)v14 || (v11[597] & 4) != 0 )
        goto LABEL_20;
      v17 = -__CFSHR__(v11[4], 3);
      v16 = (unsigned int)--*(_DWORD *)(a1 + 596);
      if ( !v17 )
        --*(_DWORD *)(a1 + 600);
    }
    else
    {
      v15 = -__CFSHR__(v11[4], 3);
      v16 = (unsigned int)++*(_DWORD *)(a1 + 596);
      if ( !v15 )
        ++*(_DWORD *)(a1 + 600);
    }
    ApiSetDwmAsyncNotifyDigitizerActiveContacts(v14, v16);
LABEL_20:
    if ( (v11[4] & 8) != 0 && (v11[651] & 2) != 0 && (v11[597] & 2) == 0 )
    {
      v18 = *(_QWORD *)(v4 + 1584);
      if ( v18 )
      {
        *(_DWORD *)(v18 + 32) &= ~8u;
        *(_QWORD *)(v4 + 1584) = 0LL;
      }
    }
    v19 = *(_OWORD *)(v11 + 582);
    *((_OWORD *)v11 + 158) = *(_OWORD *)(v11 + 578);
    v20 = *(_OWORD *)(v11 + 586);
    *((_OWORD *)v11 + 159) = v19;
    v21 = *(_OWORD *)(v11 + 590);
    *((_OWORD *)v11 + 160) = v20;
    v22 = *(_OWORD *)(v11 + 594);
    *((_OWORD *)v11 + 161) = v21;
    v23 = *(_OWORD *)(v11 + 598);
    *((_OWORD *)v11 + 162) = v22;
    v24 = *(_OWORD *)(v11 + 602);
    *((_OWORD *)v11 + 163) = v23;
    v25 = *(_OWORD *)(v11 + 606);
    *((_OWORD *)v11 + 164) = v24;
    v26 = *(_OWORD *)(v11 + 610);
    *((_OWORD *)v11 + 165) = v25;
    v27 = *(_OWORD *)(v11 + 614);
    *((_OWORD *)v11 + 166) = v26;
    v28 = *(_OWORD *)(v11 + 618);
    *((_OWORD *)v11 + 167) = v27;
    v29 = *(_OWORD *)(v11 + 622);
    *((_OWORD *)v11 + 168) = v28;
    v30 = *(_OWORD *)(v11 + 626);
    v31 = *((_QWORD *)v11 + 315);
    *((_OWORD *)v11 + 169) = v29;
    *((_OWORD *)v11 + 170) = v30;
    *((_QWORD *)v11 + 342) = v31;
LABEL_26:
    if ( a4 )
    {
      v11[576] &= 0xFFFFFFF8;
LABEL_34:
      memset(v11 + 578, 0, 0xD8uLL);
    }
    else
    {
      v32 = v11[576];
      if ( (v32 & 4) == 0 )
      {
        v11[576] = v32 & 0xFFFFFFF8;
        goto LABEL_34;
      }
      if ( (v11[4] & 8) != 0 )
      {
        v33 = *(_QWORD *)(v4 + 1584);
        if ( v33 )
        {
          *(_DWORD *)(v33 + 32) &= ~8u;
          *(_QWORD *)(v4 + 1584) = 0LL;
        }
      }
      RIMCmDeactivateContact(v4, v11 - 4);
    }
  }
  if ( !a4 )
  {
    if ( v4 == *(_QWORD *)(a1 + 608) && !*(_DWORD *)(v4 + 1580) )
      result = (_DWORD *)RIMUpdatePrimaryDevice(a1, 0LL);
    if ( !*(_DWORD *)(v4 + 1576) )
    {
      RIMRemoveFromActiveDevices(a1, v4, 0, 0LL);
      return memset((void *)(v4 + 1408), 0, 0x38uLL);
    }
  }
  return result;
}

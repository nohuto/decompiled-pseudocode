/*
 * XREFs of RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C010FAE8
 * Callers:
 *     RIMAbandonPointerDeviceFrame @ 0x1C00188F0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C010D1BC (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMRemoveFromActiveDevices @ 0x1C000B7A0 (RIMRemoveFromActiveDevices.c)
 *     ListTableIteratorNext @ 0x1C008C710 (ListTableIteratorNext.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     RIMUpdatePrimaryDevice @ 0x1C0107450 (RIMUpdatePrimaryDevice.c)
 *     RIMCmDeactivateContact @ 0x1C0115690 (RIMCmDeactivateContact.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C0139240 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 */

unsigned __int8 __fastcall RIMUpdatePointerDeviceStateAfterFrameCompleted(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  __int64 v8; // rax
  __int64 **v9; // rax
  __int64 *v10; // xmm1_8
  __int64 *v11; // rbx
  unsigned __int8 result; // al
  __int64 **v13; // rax
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
  __int64 *v35; // [rsp+30h] [rbp-20h]
  __int64 *v36[3]; // [rsp+38h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a2 + 472);
  v8 = *(_QWORD *)(v4 + 672);
  if ( v8 )
    *(_DWORD *)(v8 + 36) = 0;
  DWORD2(v34) = 0;
  v35 = *(__int64 **)(v4 + 896);
  *(_QWORD *)&v34 = v4 + 896;
  v9 = ListTableIteratorNext(v36, (__int64)&v34);
  v10 = v9[2];
  v34 = *(_OWORD *)v9;
  v35 = v10;
  while ( 1 )
  {
    v11 = v35;
    result = (_QWORD)v34 != v4 + 896
          || DWORD2(v34) != *(_DWORD *)(v4 + 904)
          || v35 != (__int64 *)(*(_QWORD *)(v4 + 896) + 16LL * *(unsigned int *)(v4 + 904));
    if ( !result )
      break;
    if ( (v35[2] & 2) == 0 )
      __int2c();
    v13 = ListTableIteratorNext(v36, (__int64)&v34);
    v35 = v13[2];
    v34 = *(_OWORD *)v13;
    if ( !a3 || (v11[288] & 1) == 0 )
      goto LABEL_29;
    v14 = *((_DWORD *)v11 + 651) & 4;
    if ( (*((_DWORD *)v11 + 651) & 4) != 0 || (*((_DWORD *)v11 + 597) & 4) == 0 )
    {
      if ( !(_DWORD)v14 || (*((_DWORD *)v11 + 597) & 4) != 0 )
        goto LABEL_23;
      v17 = -__CFSHR__(*((_DWORD *)v11 + 4), 3);
      v16 = (unsigned int)--*(_DWORD *)(a1 + 596);
      if ( !v17 )
        --*(_DWORD *)(a1 + 600);
    }
    else
    {
      v15 = -__CFSHR__(*((_DWORD *)v11 + 4), 3);
      v16 = (unsigned int)++*(_DWORD *)(a1 + 596);
      if ( !v15 )
        ++*(_DWORD *)(a1 + 600);
    }
    ApiSetDwmAsyncNotifyDigitizerActiveContacts(v14, v16);
LABEL_23:
    if ( (v11[2] & 8) != 0 && (*((_DWORD *)v11 + 651) & 2) != 0 && (*((_DWORD *)v11 + 597) & 2) == 0 )
    {
      v18 = *(_QWORD *)(v4 + 920);
      if ( v18 )
      {
        *(_DWORD *)(v18 + 32) &= ~8u;
        *(_QWORD *)(v4 + 920) = 0LL;
      }
    }
    v19 = *(_OWORD *)(v11 + 291);
    *((_OWORD *)v11 + 158) = *(_OWORD *)(v11 + 289);
    v20 = *(_OWORD *)(v11 + 293);
    *((_OWORD *)v11 + 159) = v19;
    v21 = *(_OWORD *)(v11 + 295);
    *((_OWORD *)v11 + 160) = v20;
    v22 = *(_OWORD *)(v11 + 297);
    *((_OWORD *)v11 + 161) = v21;
    v23 = *(_OWORD *)(v11 + 299);
    *((_OWORD *)v11 + 162) = v22;
    v24 = *(_OWORD *)(v11 + 301);
    *((_OWORD *)v11 + 163) = v23;
    v25 = *(_OWORD *)(v11 + 303);
    *((_OWORD *)v11 + 164) = v24;
    v26 = *(_OWORD *)(v11 + 305);
    *((_OWORD *)v11 + 165) = v25;
    v27 = *(_OWORD *)(v11 + 307);
    *((_OWORD *)v11 + 166) = v26;
    v28 = *(_OWORD *)(v11 + 309);
    *((_OWORD *)v11 + 167) = v27;
    v29 = *(_OWORD *)(v11 + 311);
    *((_OWORD *)v11 + 168) = v28;
    v30 = *(_OWORD *)(v11 + 313);
    v31 = v11[315];
    *((_OWORD *)v11 + 169) = v29;
    *((_OWORD *)v11 + 170) = v30;
    v11[342] = v31;
LABEL_29:
    if ( a4 )
    {
      *((_DWORD *)v11 + 576) &= 0xFFFFFFF8;
LABEL_37:
      memset(v11 + 289, 0, 0xD8uLL);
    }
    else
    {
      v32 = *((_DWORD *)v11 + 576);
      if ( (v32 & 4) == 0 )
      {
        *((_DWORD *)v11 + 576) = v32 & 0xFFFFFFF8;
        goto LABEL_37;
      }
      if ( (v11[2] & 8) != 0 )
      {
        v33 = *(_QWORD *)(v4 + 920);
        if ( v33 )
        {
          *(_DWORD *)(v33 + 32) &= ~8u;
          *(_QWORD *)(v4 + 920) = 0LL;
        }
      }
      RIMCmDeactivateContact(v4, v11 - 2);
    }
  }
  if ( !a4 )
  {
    if ( v4 == *(_QWORD *)(a1 + 608) && !*(_DWORD *)(v4 + 916) )
      result = RIMUpdatePrimaryDevice(a1, 0LL);
    if ( !*(_DWORD *)(v4 + 912) )
    {
      RIMRemoveFromActiveDevices(a1, v4, 0, 0LL);
      return (unsigned __int8)memset((void *)(v4 + 744), 0, 0x38uLL);
    }
  }
  return result;
}

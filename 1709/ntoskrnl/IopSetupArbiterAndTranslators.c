/*
 * XREFs of IopSetupArbiterAndTranslators @ 0x140559C78
 * Callers:
 *     IopResourceRequirementsListToReqList @ 0x1405596CC (IopResourceRequirementsListToReqList.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IopFindResourceHandlerInfo @ 0x14055A068 (IopFindResourceHandlerInfo.c)
 *     IopFindLegacyBusDeviceNode @ 0x14055A0F8 (IopFindLegacyBusDeviceNode.c)
 *     IopCallArbiter @ 0x14055A158 (IopCallArbiter.c)
 *     IopQueryResourceHandlerInterface @ 0x14055A234 (IopQueryResourceHandlerInterface.c)
 *     IopTranslateAndAdjustReqDesc @ 0x1405DA10C (IopTranslateAndAdjustReqDesc.c)
 */

__int64 __fastcall IopSetupArbiterAndTranslators(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  char v5; // r12
  char v6; // r13
  char v7; // si
  unsigned int v8; // eax
  char v9; // di
  __int64 LegacyBusDeviceNode; // rbx
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 result; // rax
  char v15; // dl
  char v16; // cl
  __int64 v17; // r11
  __int16 v18; // di
  int v19; // eax
  __int16 v20; // di
  int v21; // eax
  __int64 v22; // rdi
  char *v23; // rax
  unsigned __int64 v24; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  unsigned __int64 *v27; // rcx
  unsigned __int64 PoolWithTag; // rax
  unsigned __int64 *v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // [rsp+30h] [rbp-28h] BYREF
  __int64 v32; // [rsp+38h] [rbp-20h] BYREF
  __int64 v33; // [rsp+40h] [rbp-18h]
  char v34; // [rsp+A0h] [rbp+48h]
  char v35; // [rsp+A8h] [rbp+50h]
  __int64 v36; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v37; // [rsp+B8h] [rbp+60h] BYREF

  v4 = *((_QWORD *)a1 + 9);
  v5 = 0;
  v33 = v4;
  v6 = 0;
  v35 = 1;
  v7 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 64LL) + 1LL);
  v8 = a1[20];
  if ( v7 == 7 )
    v7 = 3;
  if ( v8 != 1 || *a1 )
  {
    v9 = 0;
    v34 = 0;
  }
  else
  {
    v9 = 1;
    v34 = 1;
  }
  if ( !v4 || v8 == 1 )
    LegacyBusDeviceNode = IopRootDeviceNode;
  else
    LegacyBusDeviceNode = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  if ( !LegacyBusDeviceNode )
    return 3221225610LL;
  while ( 1 )
  {
    if ( LegacyBusDeviceNode != IopRootDeviceNode || v6 || v9 )
    {
      if ( v5 )
        goto LABEL_17;
      v11 = *(_QWORD *)(LegacyBusDeviceNode + 32);
      if ( v11 == v4 )
        goto LABEL_17;
      LOBYTE(a3) = v7;
      if ( (unsigned __int8)IopFindResourceHandlerInfo(2LL, LegacyBusDeviceNode, a3, &v37) )
        goto LABEL_13;
      if ( (unsigned __int8)v7 > 0xFu )
        v20 = 0;
      else
        v20 = 1 << v7;
      v21 = IopQueryResourceHandlerInterface(2LL, v11, a3, &v36);
      *(_WORD *)(LegacyBusDeviceNode + 526) |= v20;
      if ( v21 < 0 )
      {
        *(_WORD *)(LegacyBusDeviceNode + 524) |= v20;
        if ( (unsigned __int8)v7 <= 0xFu )
        {
LABEL_13:
          v12 = v37;
LABEL_14:
          if ( v12 )
          {
            v5 = 1;
            if ( (*(_DWORD *)(*(_QWORD *)(v12 + 24) + 40LL) & 1) != 0 && (int)IopCallArbiter(v12, 7LL) < 0 )
            {
              v5 = 0;
            }
            else
            {
              *((_QWORD *)a1 + 36) = v12;
              *(_WORD *)(v12 + 104) = 0;
            }
          }
LABEL_17:
          if ( !v35 )
          {
LABEL_23:
            LegacyBusDeviceNode = *(_QWORD *)(LegacyBusDeviceNode + 16);
            v9 = v34;
            goto LABEL_24;
          }
          LOBYTE(a3) = v7;
          if ( (unsigned __int8)IopFindResourceHandlerInfo(1LL, LegacyBusDeviceNode, a3, &v31) )
            goto LABEL_19;
          if ( (unsigned __int8)v7 > 0xFu )
            v18 = 0;
          else
            v18 = 1 << v7;
          v19 = IopQueryResourceHandlerInterface(1LL, *(_QWORD *)(LegacyBusDeviceNode + 32), a3, &v36);
          *(_WORD *)(LegacyBusDeviceNode + 522) |= v18;
          if ( v19 >= 0 )
          {
            v30 = v36;
          }
          else
          {
            *(_WORD *)(LegacyBusDeviceNode + 520) |= v18;
            if ( (unsigned __int8)v7 <= 0xFu )
            {
LABEL_19:
              v13 = v31;
LABEL_20:
              if ( v13 )
                v6 = 1;
              if ( !v5 && v13 )
              {
                result = IopTranslateAndAdjustReqDesc(*((_QWORD *)a1 + 4), v13, &v32);
                if ( (int)result < 0 )
                  return result;
                a3 = v32;
                v15 = *(_BYTE *)(*(_QWORD *)(v32 + 64) + 1LL);
                *(_QWORD *)(v32 + 32) = *((_QWORD *)a1 + 4);
                v7 = v15;
                if ( v15 == 7 )
                  v7 = 3;
                v16 = v35;
                *((_QWORD *)a1 + 4) = a3;
                if ( (_DWORD)result == 288 )
                  v16 = 0;
                v35 = v16;
              }
              goto LABEL_23;
            }
            v30 = 0LL;
            v36 = 0LL;
          }
          PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x20207050u);
          if ( !PoolWithTag )
            return 3221225626LL;
          *(_BYTE *)(PoolWithTag + 16) = v7;
          *(_QWORD *)(PoolWithTag + 8) = PoolWithTag;
          *(_QWORD *)PoolWithTag = PoolWithTag;
          *(_QWORD *)(PoolWithTag + 24) = v30;
          *(_QWORD *)(PoolWithTag + 32) = LegacyBusDeviceNode;
          v29 = *(unsigned __int64 **)(LegacyBusDeviceNode + 512);
          if ( *v29 != LegacyBusDeviceNode + 504 )
            __fastfail(3u);
          *(_QWORD *)(PoolWithTag + 8) = v29;
          *(_QWORD *)PoolWithTag = LegacyBusDeviceNode + 504;
          *v29 = PoolWithTag;
          v13 = PoolWithTag & -(__int64)(v30 != 0);
          *(_QWORD *)(LegacyBusDeviceNode + 512) = PoolWithTag;
          v31 = v13;
          goto LABEL_20;
        }
        v22 = 0LL;
        v36 = 0LL;
      }
      else
      {
        v22 = v36;
      }
      v23 = (char *)ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x20207050u);
      v24 = (unsigned __int64)v23;
      if ( !v23 )
        return 3221225626LL;
      *((_WORD *)v23 + 52) = 0;
      *((_QWORD *)v23 + 12) = v23 + 88;
      *((_QWORD *)v23 + 11) = v23 + 88;
      *((_QWORD *)v23 + 10) = v23 + 72;
      *((_QWORD *)v23 + 9) = v23 + 72;
      v25 = v23 + 40;
      *((_QWORD *)v23 + 6) = v23 + 40;
      v26 = v23 + 56;
      *v25 = v25;
      v26[1] = v26;
      *v26 = v26;
      *(_QWORD *)(v24 + 8) = v24;
      *(_QWORD *)v24 = v24;
      *(_BYTE *)(v24 + 16) = v7;
      *(_QWORD *)(v24 + 32) = LegacyBusDeviceNode;
      v27 = *(unsigned __int64 **)(LegacyBusDeviceNode + 496);
      if ( *v27 != LegacyBusDeviceNode + 488 )
        __fastfail(3u);
      *(_QWORD *)v24 = LegacyBusDeviceNode + 488;
      *(_QWORD *)(v24 + 8) = v27;
      *v27 = v24;
      *(_QWORD *)(LegacyBusDeviceNode + 496) = v24;
      *(_QWORD *)(v24 + 24) = v22;
      v12 = v24 & -(__int64)(v22 != 0);
      v37 = v12;
      goto LABEL_14;
    }
    v9 = 1;
    v34 = 1;
    LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(*a1, a1[1]);
    if ( LegacyBusDeviceNode == v17 && !**(_DWORD **)(*((_QWORD *)a1 + 2) + 8LL) )
      LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(1LL, 0LL);
LABEL_24:
    if ( !LegacyBusDeviceNode )
      break;
    v4 = v33;
  }
  if ( !v5 )
    return 3221225610LL;
  return 0LL;
}

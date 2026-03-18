/*
 * XREFs of ACPIThermalBuildConstraints @ 0x1C0092604
 * Callers:
 *     ACPIThermalWorker @ 0x1C0092A10 (ACPIThermalWorker.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPkgDataElement @ 0x1C000D7EC (AMLIEvalPkgDataElement.c)
 *     AMLIFreeDataBuffs @ 0x1C0023374 (AMLIFreeDataBuffs.c)
 *     ACPIThermalActivateConstraint @ 0x1C002339C (ACPIThermalActivateConstraint.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIThermalBuildConstraints(__int64 *a1, __int64 a2, char a3, unsigned __int8 a4)
{
  int v5; // ebx
  unsigned int v6; // esi
  __int64 v7; // r15
  unsigned int v8; // r14d
  unsigned int v9; // r12d
  PVOID PoolWithTag; // rax
  __int64 v11; // rdi
  _BYTE v13[2]; // [rsp+20h] [rbp-50h] BYREF
  __int16 v14; // [rsp+22h] [rbp-4Eh]
  size_t Size; // [rsp+38h] [rbp-38h]
  void *Src; // [rsp+40h] [rbp-30h]
  _BYTE v17[2]; // [rsp+48h] [rbp-28h] BYREF
  __int16 v18; // [rsp+4Ah] [rbp-26h]
  unsigned int *v19; // [rsp+68h] [rbp-8h]

  v5 = AMLIEvalNameSpaceObject(a1, v17, 0, 0LL);
  if ( v5 >= 0 )
  {
    if ( v18 == 4 )
    {
      v6 = 0;
      v7 = *(_QWORD *)(a2 + 200);
      v8 = *v19;
      if ( *v19 )
      {
        while ( 1 )
        {
          v5 = AMLIEvalPkgDataElement((__int64)v17, v6, v13);
          if ( v5 < 0 )
            goto LABEL_10;
          if ( v14 != 2 )
            break;
          v9 = Size + 56;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(Size + 56), 0x54706341u);
          v11 = (__int64)PoolWithTag;
          if ( !PoolWithTag )
          {
            v5 = -1073741670;
LABEL_17:
            AMLIFreeDataBuffs((__int64)v13);
            goto LABEL_10;
          }
          memset(PoolWithTag, 0, v9);
          memmove((void *)(v11 + 56), Src, (unsigned int)Size);
          AMLIFreeDataBuffs((__int64)v13);
          *(_QWORD *)(v11 + 32) = a2;
          *(_DWORD *)(v11 + 48) = v6;
          *(_BYTE *)(v11 + 52) = a3;
          *(_BYTE *)(v11 + 54) = a4;
          if ( a3 )
          {
            *(_BYTE *)(v11 + 53) = *(_BYTE *)(v7 + 96);
            *(_BYTE *)(v11 + 55) = 0;
          }
          else
          {
            *(_BYTE *)(v11 + 53) = 100;
            if ( (unsigned int)a4 >= *(_DWORD *)(v7 + 92) )
              *(_BYTE *)(v11 + 55) = 1;
          }
          ACPIThermalActivateConstraint(v11);
          if ( ++v6 >= v8 )
            goto LABEL_10;
        }
        v5 = -1072431095;
        goto LABEL_17;
      }
    }
    else
    {
      v5 = -1072431095;
    }
LABEL_10:
    AMLIFreeDataBuffs((__int64)v17);
  }
  return (unsigned int)v5;
}

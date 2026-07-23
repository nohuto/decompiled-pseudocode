/*
 * XREFs of CmCheckRegistry @ 0x140499094
 * Callers:
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140497D1C (CmpReorganizeHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x140007490 (RtlClearAllBits.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SetFailureLocation @ 0x140221604 (SetFailureLocation.c)
 *     HvCheckHive @ 0x1404E345C (HvCheckHive.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x140516F4C (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckRegistry2 @ 0x1405A07D0 (CmpCheckRegistry2.c)
 */

__int64 __fastcall CmCheckRegistry(ULONG_PTR BugCheckParameter2, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int *v6; // r13
  _RTL_BITMAP *p_BitMapHeader; // r12
  int v8; // edx
  int v9; // r8d
  char v10; // si
  int v11; // ecx
  unsigned int v12; // ebx
  unsigned int v13; // r15d
  unsigned int *v14; // rax
  int v15; // eax
  int v16; // eax
  int v18; // r9d
  int v19; // [rsp+20h] [rbp-49h]
  __int64 v20; // [rsp+40h] [rbp-29h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+48h] [rbp-21h] BYREF
  _DWORD v22[26]; // [rsp+58h] [rbp-11h] BYREF
  int v24; // [rsp+E8h] [rbp+7Fh]

  v3 = 0;
  BitMapHeader.SizeOfBitMap = 0;
  BitMapHeader.Buffer = 0LL;
  v6 = 0LL;
  p_BitMapHeader = 0LL;
  memset(v22, 0, 0x38uLL);
  v10 = 0;
  LODWORD(v20) = 0;
  if ( (PVOID)BugCheckParameter2 == CmpMasterHive )
    return v3;
  v11 = a2;
  v12 = *(_DWORD *)(BugCheckParameter2 + 272) >> 3;
  v13 = (((v12 + 7) >> 3) + 7) & 0xFFFFFFF8;
  if ( (a2 & 0x80000) != 0 )
  {
    v14 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24))(
                            v13,
                            0LL,
                            1649167683LL);
    v6 = v14;
    if ( !v14 )
    {
      v3 = -1073741670;
      SetFailureLocation(a3, 0, 11, -1073741670, 0);
      return v3;
    }
    BitMapHeader.SizeOfBitMap = v12;
    BitMapHeader.Buffer = v14;
    p_BitMapHeader = &BitMapHeader;
    RtlClearAllBits(&BitMapHeader);
    v11 = a2;
  }
  v15 = v11 & 0x10000;
  v24 = v11 & 0x10000;
  while ( 1 )
  {
    if ( v15 )
    {
      if ( p_BitMapHeader )
        RtlClearAllBits(p_BitMapHeader);
      v16 = HvCheckHive(BugCheckParameter2, v8, v9, (_DWORD)p_BitMapHeader, (__int64)v22, a3);
      v3 = v16;
      if ( v16 < 0 )
      {
        v19 = 16;
        goto LABEL_30;
      }
      if ( v22[0] + v22[4] + v22[8] > (unsigned int)CmpReorganizeLimit )
        *(_DWORD *)(BugCheckParameter2 + 4152) |= 0x400u;
      *(_DWORD *)(BugCheckParameter2 + 4808) = v22[12];
      *(_DWORD *)(BugCheckParameter2 + 4812) = v22[13];
    }
    if ( *(int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL) < 0 )
      break;
    v16 = CmpValidateHiveSecurityDescriptors(BugCheckParameter2, a3);
    v3 = v16;
    if ( v16 >= 0 )
      goto LABEL_15;
    if ( v16 == -2147483606 )
    {
      v10 = 1;
LABEL_15:
      v16 = CmpCheckRegistry2(BugCheckParameter2, 0, p_BitMapHeader, a3, (__int64)&v20);
      v3 = v16;
      if ( v16 >= 0 )
        goto LABEL_16;
      if ( v16 == -2147483606 )
      {
        v10 = 1;
LABEL_16:
        *(_DWORD *)(BugCheckParameter2 + 4820) = v20;
        v3 = v10 != 0 ? 0x8000002A : 0;
        goto LABEL_17;
      }
      if ( v16 != -1073741267 )
      {
        v19 = 64;
        goto LABEL_30;
      }
      goto LABEL_25;
    }
    if ( v16 != -1073741267 )
    {
      v19 = 48;
LABEL_30:
      v18 = v16;
      goto LABEL_33;
    }
LABEL_25:
    v15 = v24;
    v10 = 1;
  }
  v3 = -1073741492;
  v19 = 32;
  v18 = -1073741492;
LABEL_33:
  SetFailureLocation(a3, 0, 11, v18, v19);
LABEL_17:
  if ( v6 )
    (*(void (__fastcall **)(unsigned int *, _QWORD))(BugCheckParameter2 + 32))(v6, v13);
  return v3;
}

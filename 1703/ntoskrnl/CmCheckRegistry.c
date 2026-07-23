/*
 * XREFs of CmCheckRegistry @ 0x1404B6EBC
 * Callers:
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x140439CAC (CmpReorganizeHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x14006E050 (RtlClearAllBits.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SetFailureLocation @ 0x1401DEAE4 (SetFailureLocation.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1404BF6E4 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckRegistry2 @ 0x140505E80 (CmpCheckRegistry2.c)
 *     HvCheckHive @ 0x140515888 (HvCheckHive.c)
 */

__int64 __fastcall CmCheckRegistry(ULONG_PTR a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int *v6; // r13
  _RTL_BITMAP *p_BitMapHeader; // r12
  __int64 v8; // rdx
  __int64 v9; // r8
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
  if ( a1 == CmpMasterHive )
    return v3;
  v11 = a2;
  v12 = *(_DWORD *)(a1 + 1400) >> 3;
  v13 = (((v12 + 7) >> 3) + 7) & 0xFFFFFFF8;
  if ( (a2 & 0x80000) != 0 )
  {
    v14 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 24))(v13, 0LL, 1649167683LL);
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
      v16 = HvCheckHive(a1, v8, v9, p_BitMapHeader, v22, a3);
      v3 = v16;
      if ( v16 < 0 )
      {
        v19 = 16;
        goto LABEL_30;
      }
      if ( v22[0] + v22[4] + v22[8] > (unsigned int)CmpReorganizeLimit )
        *(_DWORD *)(a1 + 5360) |= 0x400u;
      *(_DWORD *)(a1 + 6016) = v22[12];
      *(_DWORD *)(a1 + 6020) = v22[13];
    }
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 36LL) >= 0x80000000 )
      break;
    v16 = CmpValidateHiveSecurityDescriptors(a1, a3);
    v3 = v16;
    if ( v16 >= 0 )
      goto LABEL_15;
    if ( v16 == -2147483606 )
    {
      v10 = 1;
LABEL_15:
      v16 = CmpCheckRegistry2(a1, 0, p_BitMapHeader, a3, (__int64)&v20);
      v3 = v16;
      if ( v16 >= 0 )
        goto LABEL_16;
      if ( v16 == -2147483606 )
      {
        v10 = 1;
LABEL_16:
        *(_DWORD *)(a1 + 6028) = v20;
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
    (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 32))(v6, v13);
  return v3;
}

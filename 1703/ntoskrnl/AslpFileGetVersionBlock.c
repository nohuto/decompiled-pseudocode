/*
 * XREFs of AslpFileGetVersionBlock @ 0x1407308C8
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x140730814 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     RtlFileMapFree @ 0x14006D794 (RtlFileMapFree.c)
 *     _wcsicmp @ 0x14016A0F0 (_wcsicmp.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlFileMapMapView @ 0x140262BA0 (RtlFileMapMapView.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     LdrResSearchResource @ 0x1404295F0 (LdrResSearchResource.c)
 *     AslAlloc @ 0x1404B5F00 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x14072EA74 (AslFileMappingEnsure.c)
 */

__int64 __fastcall AslpFileGetVersionBlock(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // r8
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // r8
  void *v11; // r13
  size_t v12; // rbx
  unsigned __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  _WORD *v16; // rax
  _WORD *v17; // r15
  __int64 v18; // rcx
  size_t Size; // [rsp+48h] [rbp-B0h] BYREF
  _WORD *v21; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v22; // [rsp+58h] [rbp-A0h]
  __int64 v23; // [rsp+60h] [rbp-98h]
  _QWORD v24[3]; // [rsp+68h] [rbp-90h] BYREF
  _QWORD v25[15]; // [rsp+80h] [rbp-78h] BYREF
  void *Src; // [rsp+118h] [rbp+20h] BYREF

  Src = 0LL;
  v21 = 0LL;
  Size = 0LL;
  memset(v25, 0, 0x38uLL);
  v6 = *(_QWORD *)(a3 + 72);
  if ( v6 )
  {
    if ( *(_WORD *)(v6 + 2) >= 0x34u )
      *a2 = v6 + 40;
    else
      *a2 = 0LL;
    *a1 = v6;
    v7 = 0;
    goto LABEL_45;
  }
  v7 = AslFileMappingEnsure(a3);
  if ( v7 < 0 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_45;
  }
  if ( *(_DWORD *)(a3 + 64) != 6 )
  {
    v7 = -1073741687;
    goto LABEL_45;
  }
  v24[0] = 16LL;
  v24[1] = 1LL;
  v24[2] = 0LL;
  v22 = *(_QWORD *)(a3 + 32);
  v23 = *(_QWORD *)(a3 + 40);
  v8 = LdrResSearchResource(v22, v24, 3u, *(_BYTE *)(a3 + 59) == 0 ? 0x200 : 0, &Src, (__int64 *)&Size, 0LL, 0LL);
  v7 = v8;
  if ( v8 >= 0 )
  {
    v10 = v23;
  }
  else
  {
    if ( (unsigned int)(v8 + 1073741687) <= 2 )
      goto LABEL_45;
    if ( v8 != -1073741701 )
      goto LABEL_44;
    if ( *(_BYTE *)(a3 + 59) )
      goto LABEL_44;
    if ( *(_DWORD *)(a3 + 84) )
      goto LABEL_44;
    v9 = *(_QWORD *)(a3 + 8);
    memset(v25, 0, 0x38uLL);
    LOBYTE(v25[6]) = 0;
    v25[0] = v9;
    v7 = RtlFileMapMapView((__int64)v25, 1);
    if ( v7 < 0
      || (AslLogCallPrintf(3LL),
          v22 = v25[3],
          v7 = LdrResSearchResource(v25[3], v24, 3u, 0, &Src, (__int64 *)&Size, 0LL, 0LL),
          AslLogCallPrintf(2LL),
          v7 < 0) )
    {
LABEL_44:
      AslLogCallPrintf(1LL);
      goto LABEL_45;
    }
    v10 = v25[4];
  }
  v11 = Src;
  if ( !Src )
  {
    AslLogCallPrintf(1LL);
    v7 = -1073741687;
    goto LABEL_45;
  }
  v12 = Size;
  v13 = (unsigned __int64)Src + Size;
  if ( (char *)Src + Size < Src )
  {
    v13 = -1LL;
    v14 = -1073741675;
  }
  else
  {
    v14 = 0;
  }
  if ( v14 < 0
    || (unsigned __int64)Src < v22
    || v13 > v10 + v22
    || !*(_BYTE *)(a3 + 59) && !v25[1] && v13 > *(_QWORD *)(a3 + 24) + v22 )
  {
    v7 = -1073741687;
    goto LABEL_44;
  }
  if ( Size < 0x26 || wcsicmp((const wchar_t *)Src + 3, L"VS_VERSION_INFO") )
  {
    v7 = -1073741595;
    goto LABEL_44;
  }
  v16 = AslAlloc(v15, v12);
  v17 = v16;
  v21 = v16;
  if ( !v16 )
  {
    v7 = -1073741801;
    goto LABEL_44;
  }
  memmove(v16, v11, v12);
  if ( v12 < (unsigned __int16)*v17 )
    *v17 = v12;
  *(_QWORD *)(a3 + 72) = v17;
  v21 = 0LL;
  v18 = *(_QWORD *)(a3 + 72);
  if ( *(_WORD *)(v18 + 2) >= 0x34u )
    *a2 = v18 + 40;
  else
    *a2 = 0LL;
  *a1 = v18;
  v7 = 0;
LABEL_45:
  RtlFileMapFree(v25);
  return (unsigned int)v7;
}

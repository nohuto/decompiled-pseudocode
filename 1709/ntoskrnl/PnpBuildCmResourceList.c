/*
 * XREFs of PnpBuildCmResourceList @ 0x140558FE8
 * Callers:
 *     PnpBuildCmResourceLists @ 0x14055A75C (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x1405D1F00 (IopAllocateBootResourcesInternal.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x14048F170 (ObQueryNameStringMode.c)
 *     IopChildToRootTranslation @ 0x140559470 (IopChildToRootTranslation.c)
 *     IopParentToRawTranslation @ 0x14055961C (IopParentToRawTranslation.c)
 *     IopWriteResourceList @ 0x14055A3D0 (IopWriteResourceList.c)
 *     IopCreateRegistryKeyEx @ 0x14055A49C (IopCreateRegistryKeyEx.c)
 */

int __fastcall PnpBuildCmResourceList(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  int v4; // edi
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // r8
  PVOID PoolWithTag; // rax
  _DWORD *v10; // rsi
  _DWORD *v11; // rax
  _DWORD *v12; // r12
  _DWORD *v13; // r14
  int v14; // eax
  _DWORD *v15; // r15
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // r13d
  _DWORD *v22; // rcx
  int v23; // eax
  _WORD *v24; // rdi
  int v25; // r13d
  __int16 v26; // ax
  char *v27; // rdi
  int v28; // eax
  HANDLE v29; // rdi
  char *v30; // rax
  int v31; // r14d
  __int64 v32; // rax
  int v33; // eax
  bool v34; // zf
  int v36; // [rsp+38h] [rbp-D0h]
  int v37; // [rsp+3Ch] [rbp-CCh]
  __int64 v38; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v39[2]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD Destination[3]; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  PVOID P[2]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v43; // [rsp+88h] [rbp-80h] BYREF
  char v44; // [rsp+98h] [rbp-70h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  LODWORD(v38) = a2;
  v3 = a1;
  Destination[1] = a1;
  v4 = 0;
  v5 = **(_QWORD **)(v2 + 16);
  v39[0] = v5;
  LODWORD(v6) = *(_DWORD *)(v5 + 20);
  if ( !(_DWORD)v6 )
    goto LABEL_43;
  v7 = (__int64 *)(v5 + 24);
  v8 = (unsigned int)v6;
  do
  {
    v6 = *v7++;
    v4 += *(_DWORD *)(v6 + 276) + 1;
    --v8;
  }
  while ( v8 );
  if ( !v4 )
  {
LABEL_43:
    *(_DWORD *)(a1 + 56) = -1073741595;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    return v6;
  }
  LODWORD(Destination[0]) = 20 * (v4 + 1);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, LODWORD(Destination[0]), 0x20207050u);
  Handle = PoolWithTag;
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v6) = -1073741670;
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_DWORD *)(v3 + 56) = -1073741670;
    *(_QWORD *)(v3 + 48) = 0LL;
    return v6;
  }
  memset(PoolWithTag, 0, LODWORD(Destination[0]));
  v11 = ExAllocatePoolWithTag(PagedPool, LODWORD(Destination[0]), 0x20207050u);
  v12 = v11;
  if ( !v11 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(v3 + 40) = 0LL;
    LODWORD(v6) = -1073741670;
    *(_QWORD *)(v3 + 48) = 0LL;
    *(_DWORD *)(v3 + 56) = -1073741670;
    return v6;
  }
  memset(v11, 0, LODWORD(Destination[0]));
  v13 = v10 + 5;
  *v10 = 1;
  v10[1] = *(_DWORD *)v2;
  v10[2] = *(_DWORD *)(v2 + 4);
  v10[3] = 65537;
  v10[4] = v4;
  *v12 = 1;
  v12[1] = *(_DWORD *)v2;
  v14 = *(_DWORD *)(v2 + 4);
  v15 = v12 + 5;
  v12[2] = v14;
  v12[3] = 65537;
  v12[4] = v4;
  v6 = 0LL;
  v37 = 0;
  if ( !*(_DWORD *)(v5 + 20) )
  {
LABEL_19:
    if ( (_DWORD)v38 )
    {
      v27 = *(char **)v3;
      LODWORD(v6) = IopCreateRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineHardwareResourceMapName, 131103LL, 1, 0LL);
      if ( (int)v6 >= 0 )
      {
        LODWORD(v39[0]) = 1572886;
        v39[1] = L"PnP Manager";
        LODWORD(P[0]) = 1441812;
        P[1] = L"PnpManager";
        v28 = ObQueryNameStringMode(v27, (__int64)&v43, 0x200u, &v38, 0);
        v29 = Handle;
        if ( v28 >= 0 )
        {
          WORD1(v43) = 496;
          v30 = &v44;
          if ( (_WORD)v43 )
            v30 = (char *)*((_QWORD *)&v43 + 1);
          *((_QWORD *)&v43 + 1) = v30;
          *(_OWORD *)&Destination[1] = v43;
          RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L".Raw");
          v31 = Destination[0];
          if ( (int)IopWriteResourceList(v29, v39, P, &Destination[1], v12, Destination[0]) >= 0 )
          {
            *(_OWORD *)&Destination[1] = v43;
            RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L".Translated");
            IopWriteResourceList(v29, v39, P, &Destination[1], v10, v31);
          }
        }
        LODWORD(v6) = ZwClose(v29);
      }
    }
    *(_QWORD *)(v3 + 40) = v12;
    *(_QWORD *)(v3 + 48) = v10;
    return v6;
  }
  while ( 1 )
  {
    v16 = *(_QWORD *)(v5 + 8 * v6 + 24);
    if ( !*(_BYTE *)(v16 + 8) )
    {
      *(_OWORD *)v15 = *(_OWORD *)(v16 + 136);
      v15[4] = *(_DWORD *)(v16 + 152);
      *(_OWORD *)v13 = *(_OWORD *)(v16 + 136);
      v33 = *(_DWORD *)(v16 + 152);
      goto LABEL_32;
    }
    v17 = *(_QWORD *)(v16 + 32);
    if ( *(_DWORD *)(v17 + 128) == 2 )
    {
      v18 = *(_QWORD *)(v17 + 112);
    }
    else
    {
      v36 = IopParentToRawTranslation(*(_QWORD *)(v16 + 32), 0LL, 20LL);
      if ( v36 < 0 )
      {
        ExFreePoolWithTag(v10, 0);
        ExFreePoolWithTag(v12, 0);
        v34 = v36 == -1073741267;
        goto LABEL_40;
      }
      v18 = *(_QWORD *)(v16 + 112);
    }
    *(_OWORD *)v15 = *(_OWORD *)v18;
    v15[4] = *(_DWORD *)(v18 + 16);
    if ( *(_DWORD *)(v17 + 128) == 2 )
    {
      v32 = *(_QWORD *)(v17 + 112);
      v5 = v39[0];
      *(_OWORD *)v13 = *(_OWORD *)v32;
      v33 = *(_DWORD *)(v32 + 16);
LABEL_32:
      v13[4] = v33;
      goto LABEL_17;
    }
    v19 = *(_QWORD *)(v16 + 72);
    if ( v19 )
      v20 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
    else
      LODWORD(v20) = 0;
    v21 = IopChildToRootTranslation(
            v20,
            *(_DWORD *)v16,
            *(_DWORD *)(v16 + 4),
            *(_DWORD *)(v16 + 80),
            v16 + 136,
            (__int64)P);
    if ( v21 < 0 )
      break;
    v22 = P[0];
    *(_OWORD *)v13 = *(_OWORD *)P[0];
    v13[4] = v22[4];
    ExFreePoolWithTag(v22, 0);
    v5 = v39[0];
LABEL_17:
    v23 = *(_DWORD *)(v16 + 276);
    v13 += 5;
    v15 += 5;
    if ( v23 )
    {
      v24 = (_WORD *)(*(_QWORD *)(v16 + 280) + 8LL);
      v25 = v23;
      do
      {
        *(_BYTE *)v15 = -127;
        *(_BYTE *)v13 = -127;
        *((_BYTE *)v15 + 1) = 1;
        *((_BYTE *)v13 + 1) = 1;
        v26 = *(v24 - 2);
        *((_WORD *)v15 + 1) = v26;
        *((_WORD *)v13 + 1) = v26;
        memmove(v15 + 1, v24, 0xCuLL);
        memmove(v13 + 1, v24, 0xCuLL);
        v24 += 16;
        v15 += 5;
        v13 += 5;
        --v25;
      }
      while ( v25 );
      v3 = Destination[1];
      v10 = Handle;
      v5 = v39[0];
    }
    v6 = (unsigned int)(v37 + 1);
    v37 = v6;
    if ( (unsigned int)v6 >= *(_DWORD *)(v5 + 20) )
      goto LABEL_19;
  }
  ExFreePoolWithTag(v10, 0);
  ExFreePoolWithTag(v12, 0);
  v34 = v21 == -1073741267;
LABEL_40:
  LODWORD(v6) = -1073741670;
  if ( v34 )
    LODWORD(v6) = -1073741267;
  *(_QWORD *)(v3 + 40) = 0LL;
  *(_DWORD *)(v3 + 56) = v6;
  return v6;
}

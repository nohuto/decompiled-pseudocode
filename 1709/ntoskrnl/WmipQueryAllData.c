/*
 * XREFs of WmipQueryAllData @ 0x14051B564
 * Callers:
 *     WmipIoControl @ 0x140579E20 (WmipIoControl.c)
 *     IoWMIQueryAllData @ 0x1405EA680 (IoWMIQueryAllData.c)
 *     WmipQueryAllDataMultiple @ 0x140741EB0 (WmipQueryAllDataMultiple.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x1400DE9F0 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     WmipInsertStaticNames @ 0x14051B2F4 (WmipInsertStaticNames.c)
 *     WmipStaticInstanceNameSize @ 0x14051B4DC (WmipStaticInstanceNameSize.c)
 *     WmipUnreferenceEntry @ 0x14051EF80 (WmipUnreferenceEntry.c)
 *     WmipSendWmiIrp @ 0x14051F050 (WmipSendWmiIrp.c)
 *     WmipForwardWmiIrp @ 0x14051F140 (WmipForwardWmiIrp.c)
 *     WmipPrepareForWnodeAD @ 0x140588B24 (WmipPrepareForWnodeAD.c)
 */

__int64 __fastcall WmipQueryAllData(void *a1, IRP *a2, KPROCESSOR_MODE a3, __int64 a4, int a5, unsigned int *a6)
{
  unsigned int *v6; // rbx
  __int64 v7; // r14
  PVOID v8; // r13
  NTSTATUS v9; // eax
  int v10; // esi
  int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // edx
  char v14; // r12
  _BYTE *v15; // r8
  __int64 *v16; // rcx
  unsigned int v17; // r15d
  __int128 v18; // xmm6
  __int64 v19; // r14
  char v20; // r13
  __int64 v21; // rax
  _BYTE *v22; // rbx
  char *v23; // rax
  unsigned int v24; // ecx
  IRP *v25; // rax
  int v26; // eax
  unsigned int v27; // ecx
  bool v28; // zf
  unsigned int v30; // eax
  unsigned int v31; // r15d
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // eax
  int v35; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v36; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v37; // [rsp+40h] [rbp-C8h]
  __int64 v38; // [rsp+48h] [rbp-C0h]
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+58h] [rbp-B0h]
  char *v41; // [rsp+60h] [rbp-A8h]
  _BYTE *v42; // [rsp+68h] [rbp-A0h]
  PVOID P; // [rsp+70h] [rbp-98h] BYREF
  __int64 v44; // [rsp+78h] [rbp-90h]
  PIRP Irp; // [rsp+80h] [rbp-88h]
  __int64 v46; // [rsp+88h] [rbp-80h]
  unsigned int *v47; // [rsp+90h] [rbp-78h]
  __int128 v48; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v49[80]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v50[128]; // [rsp+F8h] [rbp-10h] BYREF

  v6 = a6;
  v7 = a4;
  v46 = a4;
  v8 = a1;
  Irp = a2;
  v47 = a6;
  Object = a1;
  if ( a1 )
  {
    v9 = ObReferenceObjectByPointer(a1, 1u, WmipGuidObjectType, a3);
  }
  else
  {
    v9 = ObReferenceObjectByHandle(*(HANDLE *)(a4 + 16), 1u, WmipGuidObjectType, a3, &Object, 0LL);
    v8 = Object;
  }
  v10 = v9;
  if ( v9 < 0 )
    return (unsigned int)v10;
  v36 = 16;
  P = v50;
  v10 = WmipPrepareForWnodeAD((_DWORD)v8, (unsigned int)&v48, (unsigned int)&v36, (unsigned int)&P, (__int64)&v35);
  if ( v10 < 0 )
    goto LABEL_40;
  if ( (_BYTE)v35 )
  {
    *(_DWORD *)(v7 + 44) |= 0x100u;
    *(_DWORD *)(v7 + 12) = 0;
    v10 = 0;
    *(_OWORD *)(v7 + 24) = v48;
    *a6 = 48;
    goto LABEL_40;
  }
  v11 = *(_DWORD *)(v7 + 44);
  v12 = 0;
  v13 = a5;
  v14 = 0;
  v38 = 0LL;
  v15 = (_BYTE *)v7;
  v16 = (__int64 *)P;
  v17 = a5;
  LODWORD(v40) = v11;
  v10 = -1073741163;
  v42 = (_BYTE *)v7;
  LODWORD(v37) = a5;
  if ( !v36 )
    goto LABEL_33;
  v18 = v48;
  v19 = v38;
  v41 = (char *)P;
  v20 = 0;
  v44 = v36;
  do
  {
    v21 = *v16;
    v38 = *v16;
    if ( v14 || v20 || v17 < 0x48 )
    {
      v22 = v49;
      memset(v49, 0, 0x48uLL);
      v21 = v38;
      v17 = 72;
      LODWORD(v37) = 72;
      v20 = 1;
    }
    else
    {
      v22 = v15;
    }
    *(_DWORD *)v22 = 48;
    v36 = *(_DWORD *)(v21 + 16) & 3;
    v23 = v41;
    *((_DWORD *)v22 + 11) = v40 | (v36 != 0 ? 0x80 : 0);
    *(_OWORD *)(v22 + 24) = v18;
    v24 = *(_DWORD *)(*(_QWORD *)v23 + 80LL);
    *((_DWORD *)v22 + 3) = 0;
    v25 = Irp;
    *((_DWORD *)v22 + 1) = v24;
    if ( v25 )
      v26 = WmipForwardWmiIrp(v25, v17, (__int64)v22);
    else
      v26 = WmipSendWmiIrp(0LL, v24, v22 + 24, v17, v22, &v48);
    *((_DWORD *)v22 + 1) = 0;
    if ( v26 >= 0 )
    {
      if ( (*((_DWORD *)v22 + 11) & 0x20) != 0 )
      {
        if ( *((_DWORD *)v22 + 12) <= v17 )
          v26 = -1073741823;
      }
      else if ( !*((_DWORD *)v22 + 13) )
      {
        v26 = -1073741163;
      }
      if ( v26 >= 0 )
      {
        if ( (*((_DWORD *)v22 + 11) & 0x20) != 0 )
        {
          v30 = *((_DWORD *)v22 + 12);
        }
        else
        {
          if ( !v20 )
          {
            if ( v19 )
              *(_DWORD *)(v19 + 12) = (_DWORD)v22 - v19;
            v19 = (__int64)v22;
            if ( v36 )
            {
              WmipInsertStaticNames((unsigned int *)v22, v17, v38);
              if ( (*((_DWORD *)v22 + 11) & 0x20) != 0 )
              {
                v14 = 1;
                v22 += 48;
              }
            }
            v27 = (*(_DWORD *)v22 + 7) & 0xFFFFFFF8;
            if ( (unsigned int)(*(_DWORD *)v22 + 7) < *(_DWORD *)v22 )
              v27 = *(_DWORD *)v22;
            v12 += v27;
            if ( !v14 && v17 >= v27 )
            {
              v17 -= v27;
              v42 += v27;
              LODWORD(v37) = v17;
              goto LABEL_31;
            }
            goto LABEL_54;
          }
          v30 = *(_DWORD *)v22;
        }
        if ( v30 < 0x48 )
          v30 = 72;
        v31 = v30 + v12;
        if ( v36 )
        {
          v32 = WmipStaticInstanceNameSize(v38);
          v33 = (v31 + 3) & 0xFFFFFFFC;
          if ( v31 + 3 < v31 )
            v33 = v31;
          v31 = v33 + v32;
        }
        v12 = (v31 + 7) & 0xFFFFFFF8;
        if ( v31 + 7 < v31 )
          v12 = v31;
        v17 = v37;
LABEL_54:
        v14 = 1;
      }
    }
LABEL_31:
    WmipUnreferenceEntry(&WmipISChunkInfo, v38);
    v15 = v42;
    v16 = (__int64 *)(v41 + 8);
    v28 = v44-- == 1;
    v41 += 8;
  }
  while ( !v28 );
  v7 = v46;
  v8 = Object;
  v16 = (__int64 *)P;
  v6 = v47;
  v13 = a5;
LABEL_33:
  if ( v12 )
  {
    if ( v14 )
    {
      *(_DWORD *)(v7 + 44) = 32;
      *(_DWORD *)v7 = 56;
      v34 = v13 + 64;
      if ( v12 > v13 )
        v34 = v12;
      *(_DWORD *)(v7 + 48) = v34;
      *v6 = 56;
    }
    else
    {
      *v6 = v12;
    }
    v10 = 0;
  }
  if ( v16 != (__int64 *)v50 && v16 )
    ExFreePoolWithTag(v16, 0);
LABEL_40:
  ObfDereferenceObject(v8);
  return (unsigned int)v10;
}

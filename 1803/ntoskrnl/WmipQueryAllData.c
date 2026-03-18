/*
 * XREFs of WmipQueryAllData @ 0x14051A7B0
 * Callers:
 *     WmipIoControl @ 0x14051ACC0 (WmipIoControl.c)
 *     IoWMIQueryAllData @ 0x140651680 (IoWMIQueryAllData.c)
 *     WmipQueryAllDataMultiple @ 0x1407A3F88 (WmipQueryAllDataMultiple.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140073920 (ObReferenceObjectByPointer.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     WmipInsertStaticNames @ 0x14051A548 (WmipInsertStaticNames.c)
 *     WmipStaticInstanceNameSize @ 0x14051A728 (WmipStaticInstanceNameSize.c)
 *     WmipPrepareForWnodeAD @ 0x14051AB9C (WmipPrepareForWnodeAD.c)
 *     WmipUnreferenceEntry @ 0x14051B374 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x14051BADC (WmipForwardWmiIrp.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     WmipSendWmiIrp @ 0x1405DCF88 (WmipSendWmiIrp.c)
 */

__int64 __fastcall WmipQueryAllData(void *a1, IRP *a2, KPROCESSOR_MODE a3, __int64 a4, int a5, unsigned int *a6)
{
  __int64 v6; // r14
  PVOID v7; // rbx
  NTSTATUS v8; // eax
  int v9; // esi
  int v10; // r15d
  unsigned int v11; // edi
  char v12; // r9
  unsigned int v13; // edx
  char v14; // r12
  __int64 *v15; // rcx
  _BYTE *v16; // r8
  unsigned int v17; // r13d
  __int128 v18; // xmm6
  __int64 v19; // r14
  __int64 v20; // rax
  _BYTE *v21; // rbx
  char *v22; // rax
  __int64 v23; // rdx
  IRP *v24; // rax
  int v25; // eax
  unsigned int v26; // ecx
  bool v27; // zf
  unsigned int v29; // eax
  unsigned int v30; // r15d
  int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // eax
  __int128 v34; // xmm0
  char v35; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v36; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v37; // [rsp+40h] [rbp-C8h]
  __int64 v38; // [rsp+48h] [rbp-C0h]
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  char *v40; // [rsp+58h] [rbp-B0h]
  _BYTE *v41; // [rsp+60h] [rbp-A8h]
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+70h] [rbp-98h]
  unsigned int *v44; // [rsp+78h] [rbp-90h]
  PIRP Irp; // [rsp+80h] [rbp-88h]
  __int64 v46; // [rsp+88h] [rbp-80h]
  __int128 v47; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v48[80]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v49[128]; // [rsp+F8h] [rbp-10h] BYREF

  v6 = a4;
  v46 = a4;
  v7 = a1;
  Irp = a2;
  v44 = a6;
  Object = a1;
  if ( a1 )
  {
    v8 = ObReferenceObjectByPointer(a1, 1u, WmipGuidObjectType, a3);
  }
  else
  {
    v8 = ObReferenceObjectByHandle(*(HANDLE *)(a4 + 16), 1u, WmipGuidObjectType, a3, &Object, 0LL);
    v7 = Object;
  }
  v9 = v8;
  if ( v8 < 0 )
    return (unsigned int)v9;
  v36 = 16;
  P = v49;
  v9 = WmipPrepareForWnodeAD((_DWORD)v7, (unsigned int)&v47, (unsigned int)&v36, (unsigned int)&P, (__int64)&v35);
  if ( v9 < 0 )
    goto LABEL_38;
  v10 = *(_DWORD *)(v6 + 44);
  LODWORD(v38) = v10;
  if ( v35 )
  {
    *(_DWORD *)(v6 + 12) = 0;
    v34 = v47;
    *(_DWORD *)(v6 + 44) = v10 | 0x100;
    v9 = 0;
    *(_OWORD *)(v6 + 24) = v34;
    *a6 = 48;
    goto LABEL_38;
  }
  v11 = 0;
  v37 = 0LL;
  v12 = 0;
  v13 = a5;
  v14 = 0;
  v15 = (__int64 *)P;
  v16 = (_BYTE *)v6;
  v41 = (_BYTE *)v6;
  v17 = a5;
  v35 = 0;
  v9 = -1073741163;
  if ( !v36 )
    goto LABEL_33;
  v18 = v47;
  v19 = v37;
  v40 = (char *)P;
  v43 = v36;
  do
  {
    v20 = *v15;
    v37 = *v15;
    if ( v14 || v12 || v17 < 0x48 )
    {
      v21 = v48;
      memset(v48, 0, 0x48uLL);
      v20 = v37;
      v17 = 72;
      v35 = 1;
    }
    else
    {
      v21 = v16;
    }
    *(_DWORD *)v21 = 48;
    v36 = *(_DWORD *)(v20 + 16) & 3;
    v22 = v40;
    *((_DWORD *)v21 + 11) = v10 | (v36 != 0 ? 0x80 : 0);
    *(_OWORD *)(v21 + 24) = v18;
    v23 = *(unsigned int *)(*(_QWORD *)v22 + 80LL);
    *((_DWORD *)v21 + 3) = 0;
    v24 = Irp;
    *((_DWORD *)v21 + 1) = v23;
    if ( v24 )
      v25 = WmipForwardWmiIrp(v24, v17, (__int64)v21);
    else
      v25 = WmipSendWmiIrp(0LL, v23, v21 + 24, v17, v21, &v47);
    *((_DWORD *)v21 + 1) = 0;
    if ( v25 >= 0 )
    {
      if ( (*((_DWORD *)v21 + 11) & 0x20) != 0 )
      {
        if ( *((_DWORD *)v21 + 12) <= v17 )
          v25 = -1073741823;
      }
      else if ( !*((_DWORD *)v21 + 13) )
      {
        v25 = -1073741163;
      }
      if ( v25 >= 0 )
      {
        if ( (*((_DWORD *)v21 + 11) & 0x20) != 0 )
        {
          v29 = *((_DWORD *)v21 + 12);
        }
        else
        {
          if ( !v35 )
          {
            if ( v19 )
              *(_DWORD *)(v19 + 12) = (_DWORD)v21 - v19;
            v19 = (__int64)v21;
            if ( v36 )
            {
              WmipInsertStaticNames((unsigned int *)v21, v17, v37);
              if ( (*((_DWORD *)v21 + 11) & 0x20) != 0 )
              {
                v14 = 1;
                v21 += 48;
              }
            }
            v26 = (*(_DWORD *)v21 + 7) & 0xFFFFFFF8;
            if ( (unsigned int)(*(_DWORD *)v21 + 7) < *(_DWORD *)v21 )
              v26 = *(_DWORD *)v21;
            v11 += v26;
            if ( !v14 && v17 >= v26 )
            {
              v17 -= v26;
              v41 += v26;
              goto LABEL_31;
            }
            goto LABEL_52;
          }
          v29 = *(_DWORD *)v21;
        }
        if ( v29 < 0x48 )
          v29 = 72;
        v30 = v29 + v11;
        if ( v36 )
        {
          v31 = WmipStaticInstanceNameSize(v37);
          v32 = (v30 + 3) & 0xFFFFFFFC;
          if ( v30 + 3 < v30 )
            v32 = v30;
          v30 = v32 + v31;
        }
        v11 = (v30 + 7) & 0xFFFFFFF8;
        if ( v30 + 7 < v30 )
          v11 = v30;
        v10 = v38;
LABEL_52:
        v14 = 1;
      }
    }
LABEL_31:
    WmipUnreferenceEntry(&WmipISChunkInfo, v37);
    v12 = v35;
    v15 = (__int64 *)(v40 + 8);
    v27 = v43-- == 1;
    v16 = v41;
    v40 += 8;
  }
  while ( !v27 );
  v6 = v46;
  v7 = Object;
  v15 = (__int64 *)P;
  v13 = a5;
LABEL_33:
  if ( v11 )
  {
    if ( v14 )
    {
      v33 = v13 + 64;
      *(_DWORD *)(v6 + 44) = 32;
      *(_DWORD *)v6 = 56;
      if ( v11 > v13 )
        v33 = v11;
      *(_DWORD *)(v6 + 48) = v33;
      *v44 = 56;
    }
    else
    {
      *v44 = v11;
    }
    v9 = 0;
  }
  if ( v15 != (__int64 *)v49 && v15 )
    ExFreePoolWithTag(v15, 0);
LABEL_38:
  ObfDereferenceObject(v7);
  return (unsigned int)v9;
}

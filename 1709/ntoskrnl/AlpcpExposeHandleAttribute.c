/*
 * XREFs of AlpcpExposeHandleAttribute @ 0x14049F8D4
 * Callers:
 *     AlpcpExposeAttributes @ 0x14049F2C0 (AlpcpExposeAttributes.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceConnectedPort @ 0x14049D6B0 (AlpcpReferenceConnectedPort.c)
 *     ObCompleteObjectDuplication @ 0x140506594 (ObCompleteObjectDuplication.c)
 */

__int64 __fastcall AlpcpExposeHandleAttribute(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _DWORD *v6; // r14
  char PreviousMode; // bl
  int v9; // r15d
  void *v10; // rsi
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int128 v15; // [rsp+50h] [rbp-48h] BYREF
  __int64 v16; // [rsp+60h] [rbp-38h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+18h]

  v17 = a3;
  v6 = *(_DWORD **)(a2 + 152);
  if ( !v6 )
    return 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = 0;
  v10 = 0LL;
  if ( (*(_DWORD *)(a1 + 416) & 6) == 2 )
  {
    v13 = AlpcpReferenceConnectedPort(*(_QWORD *)(a2 + 24));
    v10 = (void *)v13;
    if ( !v13 )
    {
      v12 = -1073741769;
      goto LABEL_8;
    }
    a1 = v13;
  }
  v11 = *(_DWORD *)(a1 + 256);
  if ( (v11 & 0x80000) == 0 )
    goto LABEL_22;
  v15 = 0uLL;
  v16 = 0LL;
  if ( (v11 & 0x2000000) == 0 )
  {
    if ( v6[1] <= 1u )
    {
      if ( (*v6 & *(_DWORD *)(a1 + 320)) == 0 )
      {
        v12 = -1073741788;
        goto LABEL_8;
      }
      v14 = *(_QWORD *)(a1 + 24);
      if ( (v14 & 1) != 0 )
        v14 = 0LL;
      if ( v14 )
      {
        LODWORD(v16) = *v6 & *(_DWORD *)(a1 + 320);
        LOBYTE(a3) = PreviousMode;
        v12 = ObCompleteObjectDuplication(v6 + 2, v14, a3, (char *)&v15 + 8, (char *)&v16 + 4);
        if ( v12 < 0 )
          goto LABEL_8;
        goto LABEL_7;
      }
    }
LABEL_22:
    v12 = -1073741790;
    goto LABEL_8;
  }
  LODWORD(v15) = 0x40000;
  LODWORD(v16) = v6[1];
  v9 = 1;
LABEL_7:
  v12 = 0;
  *(_OWORD *)v17 = v15;
  *(_QWORD *)(v17 + 16) = v16;
  *a4 |= 0x10000000u;
LABEL_8:
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( !v9 )
  {
    AlpcpDereferenceBlobEx((ULONG_PTR)v6, 1);
    *(_QWORD *)(a2 + 152) = 0LL;
  }
  return (unsigned int)v12;
}

/*
 * XREFs of ObCompleteObjectDuplication @ 0x140516CFC
 * Callers:
 *     AlpcpQueryHandleInformationMessage @ 0x140516BEC (AlpcpQueryHandleInformationMessage.c)
 *     AlpcpExposeHandleAttribute @ 0x140523B90 (AlpcpExposeHandleAttribute.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ObpFilterOperation @ 0x1400B03E0 (ObpFilterOperation.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObpPreInterceptHandleDuplicate @ 0x140446FF4 (ObpPreInterceptHandleDuplicate.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14049DB70 (SeAuditingWithTokenForSubcategory.c)
 *     ObpDecrementHandleCount @ 0x1404F5E48 (ObpDecrementHandleCount.c)
 *     ExCreateHandleEx @ 0x140517CF0 (ExCreateHandleEx.c)
 *     ObReferenceProcessHandleTable @ 0x140517F9C (ObReferenceProcessHandleTable.c)
 *     ObpIncrementHandleCountEx @ 0x1405311B0 (ObpIncrementHandleCountEx.c)
 *     ObpPostInterceptHandleDuplicate @ 0x1406C2114 (ObpPostInterceptHandleDuplicate.c)
 *     SeAuditHandleDuplication @ 0x1406F1884 (SeAuditHandleDuplication.c)
 *     EtwTraceDuplicateHandle @ 0x14070A7F8 (EtwTraceDuplicateHandle.c)
 */

__int64 __fastcall ObCompleteObjectDuplication(__int64 *a1, __int64 a2, char a3, __int64 *a4, int *a5)
{
  __int64 v9; // rax
  int v10; // r14d
  __int64 v11; // r9
  unsigned __int8 v12; // r12
  int v13; // esi
  __int64 v14; // r10
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r10
  __int64 Handle; // r14
  int v19; // edx
  int *v20; // rcx
  int v21; // eax
  __int64 v23; // r9
  int v24; // eax
  int v25; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+48h] [rbp-18h]
  _QWORD v27[2]; // [rsp+50h] [rbp-10h] BYREF
  int v28; // [rsp+A8h] [rbp+48h] BYREF

  *a4 = 0LL;
  v9 = ObReferenceProcessHandleTable(a2);
  v10 = v9;
  if ( v9 )
  {
    v11 = a1[2];
    v12 = v9 == ObpKernelHandleTable;
    v28 = *((_DWORD *)a1 + 6);
    v13 = ObpIncrementHandleCountEx(2, (unsigned int)&v28, a2, v11, a3, *((_DWORD *)a1 + 9), 0LL);
    if ( v13 >= 0 )
    {
      v14 = a1[2];
      v15 = v14 - 48;
      v16 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v14 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v14 - 48) >> 8)];
      v27[1] = v27;
      v27[0] = v27;
      v26 = v16;
      if ( !ObpFilterOperation(v16) )
      {
LABEL_4:
        ObfReferenceObjectWithTag((PVOID)a1[2], 0x6E48624Fu);
        Handle = ExCreateHandleEx(v10, v15, v28, *((_DWORD *)a1 + 9), (__int64)a1 + 28);
        if ( Handle )
        {
          if ( (*((_DWORD *)a1 + 9) & 4) != 0 && SeAuditingWithTokenForSubcategory(123, 0LL) )
            SeAuditHandleDuplication(a1[1], Handle, *a1, a2);
        }
        else
        {
          ObfDereferenceObjectWithTag((PVOID)a1[2], 0x7544624Fu);
          ObpDecrementHandleCount((_KPROCESS *)a2, v15);
          v13 = -1073741670;
        }
        if ( v12 == 1 )
          Handle |= 0xFFFFFFFF80000000uLL;
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 760));
        if ( (_QWORD *)v27[0] != v27 )
        {
          LOBYTE(v19) = v12;
          ObpPostInterceptHandleDuplicate(a1[2], v19, v13, v28, (__int64)v27);
        }
        if ( v13 >= 0 )
        {
          v20 = a5;
          v21 = v28;
          *a4 = Handle;
          *v20 = v21;
        }
        if ( (xmmword_1403E4010 & 0x40) != 0 && v13 >= 0 )
          EtwTraceDuplicateHandle(a1[1], Handle, a1[2], *(_DWORD *)(*a1 + 736), *(_DWORD *)(a2 + 736), v26);
        return (unsigned int)v13;
      }
      v23 = *a1;
      v25 = v28;
      v13 = ObpPreInterceptHandleDuplicate(v17, v12, &v25, v23, a2, (__int64)v27);
      if ( v13 >= 0 )
      {
        v24 = v28;
        if ( !v12 )
          v24 = v25;
        v28 = v24;
        goto LABEL_4;
      }
      ObpDecrementHandleCount((_KPROCESS *)a2, v15);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 760));
    return (unsigned int)v13;
  }
  return 3221225738LL;
}

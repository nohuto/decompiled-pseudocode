/*
 * XREFs of AMLIApplyNextNamespaceOverride @ 0x1C005CEE0
 * Callers:
 *     AMLIApplyNamespaceOverride @ 0x1C001D95C (AMLIApplyNamespaceOverride.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C005CEE0 (AMLIApplyNextNamespaceOverride.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C00171C0 (GetNameSpaceObject.c)
 *     CreateNameSpaceObject @ 0x1C00196F0 (CreateNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C005CEE0 (AMLIApplyNextNamespaceOverride.c)
 */

__int64 __fastcall AMLIApplyNextNamespaceOverride(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 *v3; // rdi
  int NameSpaceObject; // ebx
  __int16 v5; // ax
  _QWORD *v6; // rcx
  int NamespaceOverride; // eax
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h]
  int Src; // [rsp+40h] [rbp-10h] BYREF
  char v12; // [rsp+44h] [rbp-Ch]

  v10 = a2;
  v2 = (__int64 *)(a1 + 24);
  v12 = 0;
  v3 = *(__int64 **)(a1 + 24);
  NameSpaceObject = 0;
  while ( v2 != v3 )
  {
    Src = *((_DWORD *)v3 + 10);
    NameSpaceObject = GetNameSpaceObject(&Src);
    if ( *((_WORD *)v3 + 33) )
    {
      if ( NameSpaceObject >= 0 )
      {
        v5 = 128;
        goto LABEL_5;
      }
      if ( NameSpaceObject == -1073741772 )
      {
        NameSpaceObject = CreateNameSpaceObject(
                            gpheapGlobal,
                            (unsigned __int8 *)&Src,
                            v10,
                            *(struct _EX_RUNDOWN_REF **)(v10 + 48),
                            &v9,
                            0);
        if ( NameSpaceObject >= 0 )
        {
          v5 = 256;
LABEL_5:
          v6 = (_QWORD *)v9;
          *(_WORD *)(v9 + 64) |= v5;
LABEL_11:
          DereferenceObjectEx(v6);
          v9 = 0LL;
        }
      }
    }
    else
    {
      if ( NameSpaceObject >= 0 )
      {
        NamespaceOverride = AMLIApplyNextNamespaceOverride(v3, v9);
        v6 = (_QWORD *)v9;
        NameSpaceObject = NamespaceOverride;
        goto LABEL_11;
      }
      if ( NameSpaceObject == -1073741772 )
        NameSpaceObject = 0;
    }
    v3 = (__int64 *)*v3;
  }
  return (unsigned int)NameSpaceObject;
}

/*
 * XREFs of ?ValidateSecurityDescriptorDacl@@YAHPEAU_ACL@@0@Z @ 0x1800A1844
 * Callers:
 *     ?InitializePnpInfo@@YAHXZ @ 0x1800A1110 (-InitializePnpInfo@@YAHXZ.c)
 * Callees:
 *     memset @ 0x180033A5A (memset.c)
 *     memcmp_0 @ 0x180036B89 (memcmp_0.c)
 */

void *__fastcall ValidateSecurityDescriptorDacl(PACL pAcl, PACL a2)
{
  unsigned int v4; // ebx
  void *result; // rax
  void *v6; // r14
  DWORD v7; // ebp
  DWORD v8; // edi
  unsigned __int16 v9; // ax
  DWORD v10; // edi
  LPVOID pAce; // [rsp+58h] [rbp+10h] BYREF
  LPVOID Buf1; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  result = HeapAlloc(hHeap, 0, 4LL * a2->AceCount);
  v6 = result;
  if ( result )
  {
    memset(result, 0, 4LL * a2->AceCount);
    v7 = 0;
    if ( pAcl->AceCount )
    {
LABEL_3:
      v4 = 0;
      if ( !GetAce(pAcl, v7, &pAce) )
      {
LABEL_19:
        HeapFree(hHeap, 0, v6);
        return (void *)v4;
      }
      v8 = 0;
      if ( a2->AceCount )
      {
        while ( GetAce(a2, v8, &Buf1) )
        {
          v9 = *((_WORD *)pAce + 1);
          if ( *((_WORD *)Buf1 + 1) == v9 && !memcmp_0(Buf1, pAce, v9) )
          {
            v4 = 1;
            ++v7;
            *((_DWORD *)v6 + v8) = 1;
            if ( v7 < pAcl->AceCount )
              goto LABEL_3;
            goto LABEL_11;
          }
          if ( ++v8 >= a2->AceCount )
            goto LABEL_11;
        }
        goto LABEL_19;
      }
    }
LABEL_11:
    if ( v4 )
    {
      v10 = 0;
      if ( a2->AceCount )
      {
        while ( *((_DWORD *)v6 + v10) || GetAce(a2, v10, &pAce) && (*((_BYTE *)pAce + 1) & 0x10) != 0 )
        {
          if ( ++v10 >= a2->AceCount )
            goto LABEL_19;
        }
        v4 = 0;
      }
    }
    goto LABEL_19;
  }
  return result;
}

/*
 * XREFs of IopRetrieveTransactionParameters @ 0x1405B4060
 * Callers:
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     IopAllocRealFileObject @ 0x1405B3C40 (IopAllocRealFileObject.c)
 * Callees:
 *     IopGetSetSpecificExtension @ 0x1400694F0 (IopGetSetSpecificExtension.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     IopCheckStackForTransactionSupport @ 0x14015E8A4 (IopCheckStackForTransactionSupport.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopRetrieveTransactionParameters(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  int SetSpecificExtension; // edi
  _WORD *Teb; // rcx
  _WORD *v11; // rcx
  __int16 v12; // [rsp+30h] [rbp-58h]
  int v13; // [rsp+34h] [rbp-54h]
  HANDLE Handle; // [rsp+38h] [rbp-50h] BYREF
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  _WORD *v16; // [rsp+48h] [rbp-40h] BYREF

  Handle = 0LL;
  v12 = 0;
  result = TmCurrentTransaction(&Handle);
  SetSpecificExtension = result;
  v13 = result;
  if ( (_DWORD)result == -1073741637 )
  {
    SetSpecificExtension = 0;
    v13 = 0;
  }
  else if ( (int)result < 0 )
  {
    return result;
  }
  if ( Handle )
  {
    if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0
      || KeGetCurrentThread()->ApcStateIndex == 1
      || (Teb = KeGetCurrentThread()->Teb) == 0LL )
    {
      SetSpecificExtension = -1072103400;
    }
    else
    {
      v12 = Teb[372];
      SetSpecificExtension = v13;
    }
  }
  if ( SetSpecificExtension < 0 || !Handle )
    return (unsigned int)SetSpecificExtension;
  if ( IopCheckStackForTransactionSupport(a1)
    || (*(_WORD *)(a2 + 70) &= 1u, *(_DWORD *)(a2 + 88) == 1) && (a3 & 0xFEEDFF56) == 0
    || *(_BYTE *)(a2 + 137) )
  {
    if ( ObReferenceObjectByHandle(Handle, 0x120037u, (POBJECT_TYPE)TmTransactionObjectType, 1, &Object, 0LL) < 0 )
    {
      return (unsigned int)-1072103400;
    }
    else
    {
      SetSpecificExtension = IopGetSetSpecificExtension(a4, 0, 0x10u, 1, &v16, 0LL);
      if ( SetSpecificExtension >= 0 )
      {
        v11 = v16;
        *v16 = 16;
        v11[1] = v12;
        *((_QWORD *)v11 + 1) = Object;
        return (unsigned int)SetSpecificExtension;
      }
      ObfDereferenceObject(Object);
    }
    return (unsigned int)SetSpecificExtension;
  }
  return 3222863935LL;
}

/*
 * XREFs of ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C007DE60
 * Callers:
 *     GreSfmGetNotificationTokens @ 0x1C007DAD0 (GreSfmGetNotificationTokens.c)
 * Callees:
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall SfmTokenArray::GetNotificationTokens(
        SfmTokenArray *this,
        unsigned int a2,
        unsigned int *a3,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a4)
{
  int v6; // r14d
  unsigned int v7; // edi
  unsigned int v8; // edx
  unsigned int v9; // ebx
  unsigned int v10; // eax

  v6 = 0;
  v7 = 0;
  v8 = a2 / 0x28;
  v9 = *((_DWORD *)this + 3);
  if ( v8 <= v9 )
  {
    v9 = v8;
    v6 = 1;
  }
  memmove(a4, *(const void **)this, 40 * v9);
  v10 = *((_DWORD *)this + 3);
  if ( v9 < v10 )
    memmove(*(void **)this, (const void *)(*(_QWORD *)this + 40 * v9), 40 * (v10 - v9));
  *((_DWORD *)this + 3) -= v9;
  *a3 = v9;
  if ( v6 && *((_DWORD *)this + 3) )
    return (unsigned int)-1073741789;
  return v7;
}

/*
 * XREFs of tidy_global @ 0x1800982E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1locale@std@@QEAA@XZ @ 0x1800264BC (--1locale@std@@QEAA@XZ.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x180097E54 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180097ED8 (--1_Lockit@std@@QEAA@XZ.c)
 */

void tidy_global(void)
{
  char v0; // [rsp+30h] [rbp+8h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v0, 0);
  std::locale::~locale((std::locale *)&qword_18015D000);
  qword_18015D000 = 0LL;
  std::_Lockit::~_Lockit((std::_Lockit *)&v0);
}
